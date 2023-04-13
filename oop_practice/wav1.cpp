#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Open the file for binary input
    ifstream myfile("Letitbe_sample.wav", ios::in | ios::binary);

    // Check if file was successfully opened
    if (!myfile)
    {
        cout << "Cannot read example.wav\n";
        return 666;
    }

    // Read the first 44 bytes (header) of the WAV file
    char header[44];
    myfile.read(header, 44);

    // Get the sample rate from the header
    unsigned int* SampleRate = reinterpret_cast<unsigned int*>(header + 24);
    unsigned int sampleRateValue = *SampleRate;

    // Print the sample rate
    cout << "Sample rate: " << sampleRateValue << endl;

    // Close the file
    myfile.close();

    return 0;
}
