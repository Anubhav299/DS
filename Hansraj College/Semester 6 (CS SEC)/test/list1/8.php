<?php
$a = $_POST["first"];
$b = $_POST["second"];
$lcm = $a*$b;
$max = 0;
$min = 0;
$hcf = 0;

// $a > $b ? $max = $a : $max = $b;
if ($a>$b)
{
    $max = $a;
    $min = $b;
}
else
{
    $max = $b;
    $min = $a;
}

for($i = $max;$i<= ($a*$b);$i++)
{
    if (($a%$i== 0) and ($b%$i == 0))
        $lcm = $i;
}

echo "LCM of $a and $b is $lcm";
echo "<br>";
for($i = 1;$i<=$min;$i++)
{
    if(($a%$i == 0) and ($b%$i == 0))
    {
        $hcf = $i;
    }
}

echo "HCF of $a and $b is $hcf";
?>