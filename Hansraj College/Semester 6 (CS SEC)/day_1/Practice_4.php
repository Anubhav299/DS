<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Result_Practice_4</title>
</head>
<body>
    <?php
    $year=$_POST['year'];
    if (($year%4==0) && ($year%100!=0)|| ($year%400==0))  {
        echo "$year is a Leap Year.";
    }
    else echo "$year is not a Leap Year.";
    ?>
</body>
</html>