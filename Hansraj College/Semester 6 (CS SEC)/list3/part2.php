<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Result</title>
    <style>
        table{
            border: 1px black solid;
            width: 100%;

        }
        td{
            border: 1px black solid;
            padding: 2%;
        }
    </style>
</head>
<body>
<table>
<?php
$data = extract($_POST);


class student
{
    public $name,$roll,$math,$phy,$chem;
    public $count = 0;
    
    function __construct($val1,$val2,$val3,$val4,$val5)
    {
        $this->name = $val1;
        $this->roll = $val2;
        $this->math = $val3;
        $this->phy = $val4;
        $this->chem = $val5;
    }
    
    public function show_data()
    {
        echo "Name is : <br>".$this->name."<br>";
        echo "Roll no is : <br>".$this->roll."<br>";
        echo "Maths Marks : <br>".$this->math."<br>";
        echo "Physics Marks : <br>".$this->phy."<br>";
        echo "Chemistry is : <br>".$this->chem."<br>";

    }
}
echo $data;
// contains the number of variables
for($j = 1;$j<($data/5)+1;$j++)
{
    if(${"name_".$j})
    {
        echo "<td>";
        ${'student_'.$j} = new student($name_1,$roll_number_1,$Maths_1,$Physics_1,$Chemistry_1);
        ${'student_'.$j}->show_data();
        echo "</td>";
    }
}

?>
</table>
</body>
</html>