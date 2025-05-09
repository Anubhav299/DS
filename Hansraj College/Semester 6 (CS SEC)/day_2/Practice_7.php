<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Result_Practice_7</title>
</head>
<body>
    <?php
    $num=$_POST["num"];
    echo "$num".prime($num);
    function prime($num){
    $flag=1;
    if($num<1){
        $flag=0;
        return " Invalid Number!";
    }
    elseif ($num==1){
        $flag=0;
        return "$ is a not a Prime Number!";
    }
    for ($i=2;$i<$num && $flag==1;$i++) 
    {
        if ($num%$i==0){
            return " is not a Prime Number!";
            $flag=0;
        }
    }
    if ($flag==1) return " is a Prime Number!";}
    ?>
</table>
</body>
</html>