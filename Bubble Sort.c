namespace bubble
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        
//displays all the elements of the array
void displayArray(double []times, int arrayLength)
{
    string output= "";

	for (int i = 0; i < arrayLength; i++)
	{
		output+= times[i].ToString() + "\n " ;
	}
    MessageBox.Show(output);
}

void fastTimes(double[] times, int arrayLength )
{
	//creates a temporary variable
	double temp;

    //Set swapped to true
    //set noofcomparisons to MAX - 1
    int swapped = 1;
    int comparisons = arrayLength - 1;

    while (swapped == 1)
    { 
        //set swapMADE to false
        swapped = 0;
        for (int i = 0; i < comparisons; i++)
        {
            //IF array element [i] > array element [i+1] THEN
            if (times[i] > times[i + 1])
            //swap values
            {
                temp = times[i]; //place first value into temp
                times[i] = times[i + 1]; //overwrite value in times[i] with i + 1
                times[i + 1] = temp;//allocate value of temp to i+1
                swapped = 1; //set swapped to true
            }
        }
        comparisons--;//decrement the comparison
    }//End While	
    displayArray(times, arrayLength);
}

        private void button1_Click(object sender, EventArgs e)
        {
          double []runTimes = new double[]{31.6, 29.8, 15.3, 19.8, 20.5, 35.4, 17.9, 22.7, 25.9, 24.8, 27.3, 28.0, 28.3, 26.4, 31.8, 22.6, 25.5, 32.5, 27.8, 31.6, 17.9, 16.6, 31.7, 29.6, 15.8};
	        int count = runTimes.Length;
	        displayArray(runTimes, count);
	        fastTimes(runTimes, count);
        }
    }
}
