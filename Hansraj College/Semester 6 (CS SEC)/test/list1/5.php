<?php
$u = $_POST["num"];
$fact = 1;
for($i = 1;$i<=$u;$i++)
{
    $fact = $fact * $i;
}
echo "Factorial of $u is $fact";
?>
