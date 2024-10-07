#include <stdio.h>

int main() {
    int languageChoice, serviceChoice;

    // Main menu for language selection
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    printf("Enter your choice: ");
    scanf("%d", &languageChoice);

    switch (languageChoice) {
        case 1: // English
            printf("Welcome to Telecom Call Service!\n");
            printf("Press 1 for Balance Inquiry\n");
            printf("Press 2 for Customer Support\n");
            printf("Press 3 for Recharge\n");
            printf("Enter your choice: ");
            scanf("%d", &serviceChoice);

            switch (serviceChoice) {
                case 1:
                    printf("Your balance is $10.\n");
                    break;
                case 2:
                    printf("Please hold while we connect you to customer support.\n");
                    break;
                case 3:
                    printf("Recharge options: $5, $10, $20.\n");
                    break;
                default:
                    printf("Invalid choice in English menu.\n");
            }
            break;

        case 2: // Hindi
            printf("टेलीकॉम कॉल सेवा में आपका स्वागत है!\n");
            printf("Press 1 for बैलेंस जांच\n");
            printf("Press 2 for ग्राहक सहायता\n");
            printf("Press 3 for रिचार्ज\n");
            printf("Enter your choice: ");
            scanf("%d", &serviceChoice);

            switch (serviceChoice) {
                case 1:
                    printf("आपका बैलेंस $10 है।\n");
                    break;
                case 2:
                    printf("कृपया धारण करें, हम आपको ग्राहक सहायता से जोड़ रहे हैं।\n");
                    break;
                case 3:
                    printf("रिचार्ज विकल्प: $5, $10, $20।\n");
                    break;
                default:
                    printf("हिंदी मेनू में अवैध विकल्प।\n");
            }
            break;

        case 3: // Gujarati
            printf("ટેલિકોમ કૉલ સેવા માટે સ્વાગત છે!\n");
            printf("Press 1 for બેલેન્સ તપાસો\n");
            printf("Press 2 for ગ્રાહક સહાયતા\n");
            printf("Press 3 for રિચાર્જ\n");
            printf("Enter your choice: ");
            scanf("%d", &serviceChoice);

            switch (serviceChoice) {
                case 1:
                    printf("તમારો બેલેન્સ $10 છે.\n");
                    break;
                case 2:
                    printf("કૃપા કરીને રોકો, અમે તમને ગ્રાહક સહાયતાના જોડાઈ રહ્યા છીએ.\n");
                    break;
                case 3:
                    printf("રીચાર્જ વિકલ્પો: $5, $10, $20.\n");
                    break;
                default:
                    printf("ગુજરાતી મેનૂમાં અમાન્ય વિકલ્પ.\n");
            }
            break;

        default:
            printf("Invalid language choice.\n");
    }

    return 0;
}




// ternary operator

#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter a value of the first number: ");
    scanf("%d", &num1);
    printf("Enter a value of the second number: ");
    scanf("%d", &num2);
    printf("Enter a value of the third number: ");
    scanf("%d", &num3);

    // Using the ternary operator to find the minimum number
    int min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    // Output the result
    printf("The minimum value is: %d\n", min);

    return 0;
}
