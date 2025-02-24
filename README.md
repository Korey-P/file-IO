# File-IO
## Pseudocode

```plaintext
FUNCTION readCSV()
    OPEN file "data.csv"
    IF file cannot be opened THEN
        PRINT "Error: Could not open the file!"
        RETURN

    WHILE there are more lines in the file
        READ line from file
        CREATE stringstream ss with line

        EXTRACT first value as string, convert to integer num1
        EXTRACT second value as string, convert to integer num2
        EXTRACT third value as string word

        COMPUTE sum = num1 + num2

        PRINT word sum times (loop sum times)

    CLOSE file
END FUNCTION

FUNCTION main()
    CALL readCSV()
END FUNCTION
