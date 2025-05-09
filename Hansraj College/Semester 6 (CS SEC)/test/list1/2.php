<?php
$a = $_POST["first"];
$b = $_POST["second"];
$c = $_POST["third"];
if (($a>=$b) and ($a>=$c))
{
    echo "Greatest is $a";
}
else if ($b>=$c)
{
    echo "Greatest is $b";
}
else
{
    echo "Greatest is $c";
}
?>