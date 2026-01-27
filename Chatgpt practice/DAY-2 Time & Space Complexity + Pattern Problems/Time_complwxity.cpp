// Time Complexity tells us how execution time grows as input size (n) increases.

// We ignore:

// Constant values
// Hardware speed
// Minor operations
// We focus only on growth rate.

// Example -1
// for(int i = 0; i < n; i++)
    // cout << i;
// Time Complexity → O(n)

// Example 2
// for(int i = 0; i < n; i++)
//   for(int j = 0; j < n; j++)
//     cout << i << j;


// Time Complexity → O(n²)


// Dry Run Technique (VERY IMPORTANT)
// What is Dry Run?

// Manually executing code line by line to understand behavior.

// Key Differences at a Glance
// Aspect	        Time Complexity	       Space Complexity
// Measures	        Execution time growth	Memory usage growth
// Focus	        Number of operations	Extra memory used
// Units	        Steps / operations	     Memory (variables, stacks, arrays)
// Optimization goal	Faster execution	Lower memory usage
// Example	            O(n), O(n²)	        O(1), O(n)

// Time Complexity → How long it takes to complete a task
// Space Complexity → How much workspace you need to complete the task