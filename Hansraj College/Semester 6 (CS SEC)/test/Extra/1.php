<!DOCTYPE html>
<?php
include_once "C:/xampp/htdocs/test/list1/Practice2.html";
include_once "C:/xampp/htdocs/test/list1/Practice1.html";

echo "Hello";
echo strrev("fjvhsf");
echo str_repeat("HIp", 2)."<br>";
echo "<h1> hooray!</h2>";
$a1 = "WILLIAM";
 $a2 = "henry";
 $a3 = "gatES";
// $b = "yellow";
//  echo $a1 . " " . $a2 . " " . $a3 . "<br>";
//  echo fix_names($a1, $a2, $a3);
//  echo $a1 . " " . $a2 . " " . $a3;
//  function fix_names(&$n1, &$n2, &$n3)
//  {
//  $n1 = ucfirst(strtolower($n1));
//  $n2 = ucfirst(strtolower($n2));
//  $n3 = ucfirst(strtolower($n3));
//     global $b;
//     echo " this is global $b";
//     return $n2;
//  }


function add1() {
  static $number = 0;
  $number++;
  return $number;
}

echo add1();
echo "<br>";
echo add1();
echo "<br>";
echo add1();

?>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
  
</body>
</html>