<?php

if (isset($_POST["login"]) && isset($_POST["password"])) {
    $bdd = new PDO(
        "mysql:host=localhost;dbname=anthonin.boisot;charset=utf8",
        "anthonin.boisot",
        "6Y4Gsj"
    );
    $bdd->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    $query = $bdd->prepare(
        "SELECT * FROM users WHERE login = ? AND password = ?"
    );
    $query->execute([$_POST["login"], $_POST["password"]]);
    $user = $query->fetch();

    if ($user) {
        if ($user["SuperUser"]) {
            header("Location: superuser.html");
        } else {
            header("Location: user.html");
        }
    } else {
        echo "Login ou mot de passe incorrect.";
    }
} else {
    echo '<form method="post" action="">';
    echo '<label for="login">Login :</label>';
    echo '<input type="text" name="login" id="login" />';
    echo "<br />";
    echo '<label for="password">Mot de passe :</label>';
    echo '<input type="password" name="password" id="password" />';
    echo "<br />";
    echo '<input type="submit" value="Se connecter" />';
    echo "</form>";
}

?>
