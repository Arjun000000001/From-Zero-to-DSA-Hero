#include<iostream>
using namespace std;




int findfactorial(int num)
{
     int start=1;
     for(int i=1;i<=num;i++)
     {
        start=start*i;
     }
     return start;
}


int main()
{
    int value=5;
    int ans=findfactorial(value);
    cout<<ans;
}
/*
👨‍💻 Let's learn why functions are important — with a real-life analogy!

💡 Think of a function as a *recipe* in a kitchen:
   - You don't cook tea from scratch every time.
   - You follow a step-by-step recipe once written, and reuse it.
   - That recipe = your function!

Now, let's define our function to make tea.
*/

// 👇 This function handles the process of making tea
void makeTea() {
    // Step 1: Boil the water
    // Step 2: Add tea leaves
    // Step 3: Add milk and sugar
    // Step 4: Serve the tea

    // 🧠 Notice: All these steps are inside one function = reusable
}

/*
👥 Now suppose 3 customers come and ask for tea.

🧠 Without a function, you'd write the same steps 3 times = time waste, error-prone.

✅ With a function, we just call makeTea() again and again.
*/

// main() is the starting point of our program
int main() {
    // 👤 Customer 1 wants tea
    // 👉 Call the recipe (function)
    makeTea();

    // 👤 Customer 2 wants tea
    // 👉 Call the same function again
    makeTea();

    // 👤 Customer 3 wants tea
    // 👉 Reuse the recipe once more
    makeTea();

    return 0;
}

/*
🔥 So what did we learn?

✅ Functions are used for:
   1. Reusability: Write once, use anywhere
   2. Clean Code: main() looks short & simple
   3. Easy Debugging: Bugs are easy to fix inside function
   4. Modularity: Break program into small parts (functions)
   5. Scalability: Helps build bigger programs easily

💬 Final Thought:
"Functions = Ek baar likho, baar baar kaam lo!" 🧠✅

Next level: Learn about functions with parameters, return types, and recursion 😎
*/
