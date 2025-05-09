<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Result_Practice_2</title>
</head>
<body>
    <?php
    $first=$_POST["first"];
    $second=$_POST["second"];
    $third=$_POST["third"];
    if ($first>=$third and $first>=$second) echo "First number is largest! i.e. $first";
    elseif ($second>=$third) echo "Second number is largest! i.e. $second";
    else echo "Third Number is largest! i.e. $third"
    ?>
</body>
</html>