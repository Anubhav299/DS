<?php
$a = $_POST["first"];
$b = $_POST["second"];
$c = $_POST["third"];
echo "Greatest Number is : " . greatest();

function greatest()
{
    global $a;
    global $b;
    global $c;
    if (($a >= $b) and ($a >= $c)) {
        return $a;
    } else if ($b >= $c) {
        return $b;
    } else {
        return $c;
    }
}
?>