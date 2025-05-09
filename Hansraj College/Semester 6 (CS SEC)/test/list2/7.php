<?php
$a = $_POST["p"];
echo prime($a);


function prime($a)
{
    $i = 2;
    $flag = 0;

    while (($i <= $a / 2) && ($flag == 0)) {
        if ($a % $i == 0) {
            $flag = 1;
        }
        $i = $i + 1;
    }
    if (($flag == 0) and ($a == 0)) {
        echo "$a not defined";
    } else if ($flag == 0) {
        echo "$a is Prime Number";
    } else if ($flag > 0) {
        echo " $a is Composite Number";
    }
}
?>
