<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Result_Practice_8</title>
</head>
<body>
    <?php
    $first=$_POST["first"];
    $second=$_POST["second"];
    $hcf=1;$lcm=0;
    $first>$second ? $min=$second: $min=$first;
    for ($i=$min;$i>1;$i--){
        if ($first%$i==0 && $second%$i==0) $hcf=$i;
    }
    echo " HCF of $first and $second is $hcf. <br>";
    $prod=$first*$second;
    $first>$second ? $max=$first: $max=$second;
    for ($j=$max;$j<=$prod;$j++){
        if ($j%$first==0 && $j%$second==0) $lcm=$j;
    }
    echo " LCM of $first and $second is $lcm.";
    ?>
</table>
</body>
</html>