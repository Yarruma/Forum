//
// Created by manar mighri and Mehdi Rejeb Kaabia and Rania Fathallah on 21/11/2023.
//

#include "MENU.h"
#include <stdio.h>
/*---------------------------------------------------------------------------------------------------------------------*/
int Menu()

{
    printf("\n-------------------------------------------FORUM---------------------------------------------------\n");
    int choice;

    printf("\n1. Login\n");

    printf("\n2. Subscribe\n");

    printf("\n3. Visit\n");

    printf("\n4. Exit\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice: \n");

    scanf("%d",&choice);
    return choice;

}


/*---------------------------------------------------------------------------------------------------------------------*/


int Welcome()
{
    printf("\n----------------------------------------------WELCOME!---------------------------------------------\n");
    int choice;

    printf("\n1. Explore\n");

    printf("\n2. Settings\n");

    printf("\n3. About\n");

    printf("\n4. Disconnect\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice: \n");

    scanf("%d",&choice);
    return choice;
}
/*---------------------------------------------------------------------------------------------------------------------*/

int Menu_visit() {
    printf("\n-----------------------------------------------VISIT-----------------------------------------------\n");
    int choice;

    printf("\n1. Explore\n");

    printf("\n2. Go back to previous menu\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice: \n");

    scanf("%d", &choice);
    return choice;

}

/*---------------------------------------------------------------------------------------------------------------------*/

int Menu_visit_explore()
{
    printf("\n--------------------------------------------Rooms--------------------------------------------------\n");
    int choice;

    printf("\n1. Select a room\n");

    printf("\n2. return\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice: \n");

    scanf("%d",&choice);
    return choice;


}
/*---------------------------------------------------------------------------------------------------------------------*/
int Menu_visit_rooms_select_room()
{
    int choice;

    printf("\n-------------------------------------------Questions-----------------------------------------------\n");

    printf("\n1. Select a question\n");

    printf("\n2. Return\n");


    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice:\n");

    scanf("%d",&choice);

    return choice;
}
/*---------------------------------------------------------------------------------------------------------------------*/

int Menu_visit_rooms_select_room_select_quest()
{
    int choice;

    printf("\n--------------------------------------------------Replies------------------------------------------\n");

    printf("\n1. Select a message\n");

    printf("\n2. Return\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice:\n");

    scanf("%d",&choice);

    return choice;
}
/*---------------------------------------------------------------------------------------------------------------------*/


int Menu_login_explore()
{
    printf("\n------------------------------------------------Explore-------------------------------------------\n");
    int choice;

    printf("\n1. Add a new room\n");

    printf("\n2. See rooms  \n");

    printf("\n3. Search for questions by date\n");

    printf("\n4. Return\n");


    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice: \n");

    scanf("%d",&choice);

    return choice;
}

/*----------------------------------------------------------------------------------------------------------------------*/
int Menu_login_explore_add_new_room()
{
    int choice;

    printf("\n-----------------------------------------------New room--------------------------------------------\n");

    printf("\n1. Add a question\n");

    printf("\n2. Modify room\n");

    printf("\n3. Delete room\n");

    printf("\n4. Return\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice:\n");

    scanf("%d",&choice);

    return choice;
}

/*---------------------------------------------------------------------------------------------------------------------*/
int Menu_login_explore_rooms()
{
    int choice;

    printf("\n----------------------------------------------Rooms------------------------------------------------\n");

    printf("\n1. Select a room\n");

    printf("\n2. Return\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice:\n");

    scanf("%d",&choice);

    return choice;

}


/*---------------------------------------------------------------------------------------------------------------------*/
int Menu_login_explore_rooms_select_room()
{
    int choice;

    printf("\n---------------------------------------------Questions---------------------------------------------\n");

    printf("\n1. Select a question\n");

    printf("\n2. Ask a question\n");

    printf("\n3. See this room's authors\n");

    printf("\n4. Return\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice:\n");

    scanf("%d",&choice);

    return choice;
}



/*---------------------------------------------------------------------------------------------------------------------*/
int Menu_login_explore_rooms_select_room_select_quest()
{
    int choice;

    printf("\n--------------------------------------------------Replies------------------------------------------\n");

    printf("\n1. Answer\n");

    printf("\n2. Search for a word\n");

    printf("\n3. Return\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice:\n");

    scanf("%d",&choice);

    return choice;
}


/*---------------------------------------------------------------------------------------------------------------------*/
int Menu_login_about()
{
    int choice ;

    printf("\n----------------------------------------About------------------------------------------------------\n");

    printf("\n1. Users\n");

    printf("\n2. Statistics\n");

    printf("\n3. Details\n");

    printf("\n4. Return\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice\n");

    scanf("%d",&choice);

    return choice;

}
/*---------------------------------------------------------------------------------------------------------------------*/
int Menu_login_about_users()
{
    int choice ;

    printf("\n----------------------------------------About------------------------------------------------------\n");

    printf("\n1. Select an author\n");

    printf("\n2. Return\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice\n");

    scanf("%d",&choice);

    return choice;

}

/*---------------------------------------------------------------------------------------------------------------------*/
int Menu_login_settings()
{
    int choice;

    printf("\n------------------------------------------Settings-------------------------------------------------\n");

    printf("\n1. My account\n");

    printf("\n2. Posts\n");

    printf("\n3. Return\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice:\n");

    scanf("%d",&choice);

    return choice;
}



/*---------------------------------------------------------------------------------------------------------------------*/
int Menu_login_settings_account()
{
    int choice;

    printf("\n------------------------------------------My account-----------------------------------------------\n");

    printf("\n1. See profile\n");

    printf("\n2. Modify personal information\n");

    printf("\n3. Delete account\n");

    printf("\n4. Return\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice:\n");

    scanf("%d",&choice);

    return choice;
}


/*---------------------------------------------------------------------------------------------------------------------*/

int Menu_delete_account()
{
    int choice;

    printf("\n------------------------------------------Account deletion------------------------------------------\n");

    printf("\nPlease note that by confirming your account deletion, you will permanently lose access to this account.\nEvery question you posted will be permanently deleted!\nAre you sure you want to confirm?\n");

    printf("\n1. I confirm!\n");

    printf("\n2. No! I no longer want to delete my account.\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice:\n");

    scanf("%d",&choice);

    return choice;

}
/*---------------------------------------------------------------------------------------------------------------------*/
int Menu_login_settings_posts()
{
    int choice ;

    printf("\n-------------------------------------Author settings-----------------------------------------------\n");

    printf("\n1. See questions\n");

    printf("\n2. Return\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice:\n");

    scanf("%d",&choice);

    return choice;

}
/*---------------------------------------------------------------------------------------------------------------------*/
int Menu_login_settings_posts_questions()
{
    int choice ;

    printf("\n-------------------------------------Posted questions----------------------------------------------\n");

    printf("\n1. Select a question\n");

    printf("\n2. Return\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice:\n");

    scanf("%d",&choice);

    return choice;

}

/*---------------------------------------------------------------------------------------------------------------------*/
int Menu_login_settings_posts_questions_select()
{

    int choice ;

    printf("\n--------------------------------------------question-----------------------------------------------\n");

    printf("\n1. Modify question\n");

    printf("\n2. Delete question\n");

    printf("\n3. Delete a reply\n");

    printf("\n4. Return\n");

    printf("\n---------------------------------------------------------------------------------------------------\n");

    printf("\nchoice:\n");

    scanf("%d",&choice);

    return choice;

}

/*---------------------------------------------------------------------------------------------------------------------*/









