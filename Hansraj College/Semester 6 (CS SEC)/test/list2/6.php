<?php
$term = $_POST["num"];

echo "Fibonacci Series ".fibo($term);


function fibo($term)
{
    $l =0;
    $h = 1;
    $s = 0;
    echo $l . " ";
    echo $h . " ";
    for ($i = 1; $i <= $term - 2; $i++) {
        $s = $l + $h;
        echo $s . " ";
        $l = $h;
        $h = $s;
    }
}
?>