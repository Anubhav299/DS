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
    <tr>
    <?php
    $data=extract($_POST);
    class student
    {
        public $name,$roll,$math,$physics,$chemistry;
        public $count=0;
        function __construct($param1,$param2,$param3,$param4,$param5){
            $this->name=$param1;
            $this->roll=$param2;
            $this->math=$param3;
            $this->physics=$param4;
            $this->chemistry=$param5;
        }
        public function show_data(){
            // static $this->count++;   
            print "<td>";
            // print "Details about Student".$count."<br>";
            print "Name is: <br>".$this->name."<br>";
            print "Roll Number is: <br>".$this->roll."<br>";
            print "Physcis Marks: <br>".$this->physics."<br>";
            print "Chemistry Marks: <br>".$this->chemistry."<br>";
            print "Maths Marks: ".$this->math."<br>";
            print "</td>";
        }
    }
    for ($j=1;$j<($data/5)+1;$j++){
    if (${"name_".$j}){    
    ${'student_'.$j}= new student($name_1,$roll_number_1,$Maths_1,$Physics_1,$Chemistry_1);
    ${'student_'.$j}->show_data();
    }
    }  
    // else {
    //     print "Nothing to Display!!, Please fill the form <a href='./form.html'>here.</a>";
    // };
    ?>
    </tr>
    </table>
</body>
</html>