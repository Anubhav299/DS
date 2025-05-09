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
    echo "Biggest number is: ".biggest($first,$second,$third);
    function biggest($first,$second,$third){
    if ($first>=$third and $first>=$second) return $first;
    elseif ($second>=$third) return $second;
    else return $third;}
    ?>
</body>
</html>