#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projet");
db.setUserName("sana");//inserer nom de l'utilisateur
db.setPassword("2020");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
