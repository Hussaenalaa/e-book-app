#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 50
#define EMAIL_LENGTH 100
#define PHONE_NUMBER_LENGTH 100
#define IDEA_LENGTH 500

struct User {
  char name[NAME_LENGTH];
  char email[EMAIL_LENGTH];
  char number[PHONE_NUMBER_LENGTH];
};

void display_menu() {
  printf("Welcome to the C Programming eBook application!\n");
  printf("Please provide your details below:\n");


  struct User user;
  int num , d ;
  printf("Name: ");
  fgets(user.name, NAME_LENGTH, stdin);
  printf("Email: ");
  fgets(user.email, EMAIL_LENGTH, stdin);
  printf("Phone number: ");
  fgets(user.number, PHONE_NUMBER_LENGTH, stdin);

  printf("\nHello %s! Please select a topic to read:\n", user.name);
  printf("1. Variables\n");
  printf("2. Data Types\n");
  printf("3. Operators\n");
  printf("4. Team name\n");
  printf("5. Chat with AI\n");
  printf("6. Submit an idea\n");
  printf("Enter your choice: ");
  scanf("%d", &num);

  switch(num) {
    case 1:
      printf("Ok, first what are variables?\n");
      printf("Variables are containers for storing data values, like numbers and characters.\n");
      printf("int - stores integers (whole numbers), without decimals, such as 123 or -123.\n");
      printf("float - stores floating point numbers, with decimals, such as 19.99 or -19.99.\n");
      printf("char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes.\n");
      break;
    case 2:
      printf("What are data types?\n");
      printf("The data type specifies the size and type of information the variable will store.\n");
      printf("The size of int data type : 4 \nThe size of char data type : 1\nThe size of float data type : 4\nThe size of double data type : 8");
      break;
    case 3:
      printf("Operators:\n");
      printf("+ Adds two operands.\n- Subtracts second operand from the first.\n* Multiplies both operands.\n");
      printf("Arithmetic Operators:\n These operators are used to perform basic arithmetic operations. They \nincludeAddition (+)\nSubtraction (-)\nMultiplication (*)Division (/)Modulus (%)Relational Operators: These operators are used to compare two values or variables. They include:\nGreater than (>)\nLess than (<)\nGreater than or equal to (>=)\nLess than or equal to (<=)\nEqual to (==)\nNot equal to (!=)\nLogical Operators:\n These operators are used to perform logical operations.\n They include:Logical AND (&&)\nLogical OR (||)\nLogical NOT (!)\nAssignment Operators:\n These operators are used to assign values to variables. They include:Simple assignment (=)\nAdd and assign (+=)\nSubtract and assign (-=)\nMultiply and assign (*=)\nDivide and assign (/=)\nModulus and assign (%=)\nIncrement and Decrement Operators: These operators are used toincrement or decrement the value of a variable.\n Theyinclude:\nIncrement operator (++)\nDecrement operator (--)\n");
      break;
    case 4:
      printf("Team 10:\n");
      printf("Hussaenalaa\n");
      break;
    case 5:
      printf("Chat with AI:\n");
      printf("AI: Hi, I'm a simple chatbot. How can I help you today? You should ask me about C.\n");

      char message[IDEA_LENGTH];
      while(1) {
        printf("You: ");
        getchar(); // clear the input buffer
        fgets(message, IDEA_LENGTH, stdin);

        // convert the message to lowercase for easier comparison
        char lowercase_message[IDEA_LENGTH];
        for (int i = 0; i < strlen(message); i++) {
          lowercase_message[i] = tolower(message[i]);
        }

        // check if the user wants to quit the chatbot
        if (strcmp(lowercase_message, "quit\n") == 0) {
          break;
        } else if (strstr(lowercase_message, "hello") != NULL ||
                   strstr(lowercase_message, "hi") != NULL ||
                   strstr(lowercase_message, "hey") != NULL) {
          printf("AI: Hi there!\n");
        } else if (strstr(lowercase_message, "how are you") != NULL ||
                   strstr(lowercase_message, "how's it going") != NULL) {
          printf("AI: I'm a machine, I don't have feelings, but thanks for asking!\n");
        } else if (strstr(lowercase_message, "what's your name") != NULL ||
                   strstr(lowercase_message, "who are you") != NULL) {
          printf("AI: My name is Chatbot, nice to meet you!\n");
        } else if (strstr(lowercase_message, "thanks") != NULL ||
                   strstr(lowercase_message, "thank you") != NULL) {
          printf("AI: You're welcome!\n");
        } else if (strstr(lowercase_message, "c programming") != NULL ||
                   strstr(lowercase_message, "c language") != NULL ||
                   strstr(lowercase_message, "learn c") != NULL) {
          printf("AI: Sure, what do you want to know about C programming?\n");
        } else {
          printf("AI: Sorry, I didn't understand what you said.\n");
        }
      }
      printf("Goodbye!\n");
      break;
    case 6:
      printf("Please enter your idea (max 500 characters):\n");
      scanf("%d", &d); // fixed the format specifier
      break;
    default:
      printf("Invalid option\n");
      break;
  }
}

int main() {
  display_menu();
  return 0;
}
