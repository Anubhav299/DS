<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Result_Practice_3</title>
</head>
<body>
<table style="border:1px solid black;">
    <?php
    $num=$_POST["num"];
    table($num);
    function table($num){
    for ($i=1;$i<=10;$i++) echo "<tr><td> $num X $i =".$num*$i."</td></tr>";
    }
?>
</table>
</body>
</html>