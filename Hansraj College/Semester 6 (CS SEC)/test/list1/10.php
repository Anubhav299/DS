<?php
$n= $b = $_POST["num"];
$rev = 0;
$m = 0;
$s = 0;
while ($n!= 0)
{
    $m = $n%10;
    $rev = $rev *10+$m;
    $s = $s+ $m;
    $n = (int)($n/10);
}
echo "Reversed Number $rev" . "<br>";
echo "Sum of numbers $s" . "<br>";

if ($rev == $b)
{
    echo "$b is Palindrome "."<br>";
}
else echo "$b is not Palindrome"."<br>";
?>