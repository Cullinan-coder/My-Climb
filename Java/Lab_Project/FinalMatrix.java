
/*import java.util.Scanner;

public class FinalMatrix {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int rows = 3; // set your desired number of rows
        int columns = 3; // set your desired number of columns
        int[][] matrix = new int[rows][columns];

        System.out.println("Enter " + matrix.length + " rows and " + matrix[0].length + " columns: ");
        for (int row = 0; row < matrix.length; row++) {
            for (int column = 0; column < matrix[row].length; column++) {
                matrix[row][column] = input.nextInt();
            }
        }
        input.close();

        // Print the matrix
        for (int row = 0; row < matrix.length; row++) {
            for (int column = 0; column < matrix[row].length; column++) {
                System.out.print(matrix[row][column] + " ");
            }
            System.out.println();
        }

        // Calculate total sum of all elements
        int total = 0;
        for (int row = 0; row < matrix.length; row++) {
            for (int column = 0; column < matrix[row].length; column++) {
                total += matrix[row][column];
            }
        }
        System.out.println("Total sum of all elements: " + total);

        // Sum for each column
        for (int column = 0; column < matrix[0].length; column++) {
            int colTotal = 0;
            for (int row = 0; row < matrix.length; row++)
                colTotal += matrix[row][column];
            System.out.println("Sum for column " + column + " is " + colTotal);
        }

        // Shuffle the matrix
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                int i1 = (int)(Math.random() * matrix.length);
                int j1 = (int)(Math.random() * matrix[i].length);
                // Swap matrix[i][j] with matrix[i1][j1]
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i1][j1];
                matrix[i1][j1] = temp;
            }
        }

        // Print the shuffled matrix
        System.out.println("Shuffled matrix:");
        for (int row = 0; row < matrix.length; row++) {
            for (int column = 0; column < matrix[row].length; column++) {
                System.out.print(matrix[row][column] + " ");
            }
            System.out.println();
        }
    }
}
*/
// THİS İS OUTPUT:
//Enter 3 rows and 3 columns: 
//84
//7
//65
//4
//54
//24
//48
//54
//57
//84 7 65 
//4 54 24
//48 54 57
//Total sum of all elements: 397
//Sum for column 0 is 136
//Sum for column 1 is 115
//Sum for column 2 is 146
//Shuffled matrix:
//57 24 7
//54 65 54
//48 4 84

