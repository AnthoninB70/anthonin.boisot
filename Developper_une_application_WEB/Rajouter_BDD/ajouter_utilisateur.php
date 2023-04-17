<?php

if (isset($_POST["login"]) && isset($_POST["password"])) {
    $bdd = new PDO(
        "mysql:host=localhost;dbname=anthonin.boisot;charset=utf8",
        "anthonin.boisot",
        ""
    );
    $bdd->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    $login = $_POST["login"];
    $password = $_POST["password"];
    $superuser = isset($_POST["superuser"]) ? 1 : 0;

    $query = $bdd->prepare(
        "INSERT INTO users (login, password, SuperUser) VALUES (?, ?, ?)"
    );
    $query->execute([$login, $password, $superuser]);

    header("Location: confirmation.html");
} else {
    echo "Veuillez entrer un login et un mot de passe.";
}

?>
