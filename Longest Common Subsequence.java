class Main
{
    // Function to find the length of the longest common subsequence of substring
    // `X[0…m-1]` and `Y[0…n-1]`
    public static int LCSLength(String X, String Y)
    {
        int m = X.length(), n = Y.length();
 
        // lookup table stores solution to already computed subproblems,
        // i.e., `T[i][j]` stores the length of LCS of substring
        // `X[0…i-1]` and `Y[0…j-1]`
        int[][] T = new int[m + 1][n + 1];
 
        // fill the lookup table in a bottom-up manner
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                // if the current character of `X` and `Y` matches
                if (X.charAt(i - 1) == Y.charAt(j - 1)) {
                    T[i][j] = T[i - 1][j - 1] + 1;
                }
                // otherwise, if the current character of `X` and `Y` don't match
                else {
                    T[i][j] = Integer.max(T[i - 1][j], T[i][j - 1]);
                }
            }
        }
 
        // LCS will be the last entry in the lookup table
        return T[m][n];
    }
 
    public static void main(String[] args)
    {
        String X = "XMJYAUZ", Y = "MZJAWXU";
 
        System.out.println("The length of the LCS is " + LCSLength(X, Y));
    }
}

// The length of the LCS is 4

