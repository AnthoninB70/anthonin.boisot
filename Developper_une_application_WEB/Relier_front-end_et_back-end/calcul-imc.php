<?php
  $poids = $_POST['poids'];
  $taille = $_POST['taille'];
  $sexe = $_POST['sexe'];

  $imc = $poids / ($taille * $taille);

  if ($imc < 16) {
    $interpretation = "Dénutrition - Maigreur extrême";
  } elseif ($imc < 17) {
    $interpretation = "Maigreur";
  } elseif ($imc < 18.5) {
    $interpretation = "léger sous-poids";
  } elseif ($imc < 25) {
    $interpretation = "Corpulence normale";
  } elseif ($imc < 30) {
    $interpretation = "Surpoids";
  } elseif ($imc < 35) {
    $interpretation = "Obésité de stade 1 (modérée)";
  } elseif ($imc < 40) {
    $interpretation = "Obésité de stade 2 (sévère)";
  } else {
    $interpretation = "Obésité de stade 3 (morbide/massive)";
  }

  echo "IMC : " . $imc . "<br>";
  echo "Sexe : " . $sexe . "<br>";
  echo "Interprétation : " . $interpretation . "<br>";
  echo "<a href='index.html'>Revenir au formulaire</a>";
?>
