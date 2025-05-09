<?php
$y = $_POST["year"];
echo "You entered year $y";
echo "<br>";
if (($y%4 == 0)&&($y % 100 != 0) || ($y % 400 ==0)) 
{
    echo "$y is a leap year";
}
else
    echo "$y Not a leap year";
?>