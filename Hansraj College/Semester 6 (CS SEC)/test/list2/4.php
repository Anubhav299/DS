<?php
$y = $_POST["year"];
echo "You entered year $y". " it is  ".leap($y);


function leap($y)
{
    if (($y % 4 == 0) && ($y % 100 != 0) || ($y % 400 == 0)) {
        return " leap year";
    } else
        return "not a leap year";
}
?>