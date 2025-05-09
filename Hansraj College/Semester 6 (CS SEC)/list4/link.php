<?php
/////////////// Sorting of Array
$s = array(12,13,14,2,1);
echo "Unsorted Array:";
foreach($s as $a)
{
    echo $a." ";
}
sort($s);
echo"<br> Sorted Array: ";

foreach($s as $a)
{
    echo $a." ";
}
echo "<br>";

////////////// Names with A letter
$names = array("Pranjal","Harsh","Hitesh","Aman","Abhijay");
    echo "<br> Our array: ";
    foreach($names as $name)
    {
        echo $name . " ";
    }
    echo "<br> After: ";
    foreach($names as $name)
    {
        if ($name[0]=='A')
        {
            echo $name . " ";
        }
    }
    echo "<br>";



    echo "<br>";
///////////////// Array
$student = array("Maths"=>"20","Chem"=>"90","History"=>"80","Computer"=>"70");
ksort($student);

foreach($student as $key=>$value)
{
    echo $key." = ".$value."<br>";
}

?>