<?php
$n= $_POST["num"];

$result = sumrevpalin($n);
echo "Sum of numbers " . $result[0]."<br>";
echo "Reverse of number " . $result[1]."<br>";

if($result[2] == 0)
{
    echo "Not a palindrome"."<br>";
}
else
{
    echo "Palindrome"."<br>";
}


function sumrevpalin($n)
{
    $result = [3];
    $b = $n;
    $rev = 0;
    $m = 0;
    $s = 0;
    while ($n != 0) {
        $m = $n % 10;
        $rev = $rev * 10 + $m;
        $s = $s + $m;
        $n = (int) ($n / 10);
    }
    $result[0] = $rev;
    $result[1] = $s;

    $pair = 0;
    if ($rev == $b) {
        $pair = 1;
    } else
        $pair = 0;

    $result[2] = $pair;
    return $result;
}
?>