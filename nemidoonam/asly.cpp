#include "asly.h"
#include "ui_asly.h"//dokme ha adrezan pass mosavi bezary ye dokme ro neshon midan pash mishe fahmid kodoom ro zade
#include <QTime>
#include<QListWidget>
#include<QTimer>
asly::asly(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::asly)
{
    ui->setupUi(this);
    ui->user->setMaximumSize(0,0);
    ui->type->setMaximumSize(0,0);
    ui->username_2->setText(name);
    timer=new QTimer;
    connect(timer,SIGNAL(timeout()),this,SLOT(newmessegs()));
    timer->start(5000);
    connect(ui->contactgroup,SIGNAL(&QListWidget::itemClicked),this,SLOT(&asly::show_messeg));
}
void asly::newmessegs(){
    user->retrieveServer();
}
void asly::on_contact_clicked(QString id){int j=0;
                                          std::map<std::pair<std::string, User::type>, std::vector<nlohmann::json>>::iterator it;
                                          for (it=user->getChats().begin();it!=user->getChats().end();it++){
                                              if(it->first.first==id.toStdString())
                                                  break;
                                          }
                                                                                show_messeg(it->second);
      /* if(ui->serchtxt->text().toStdString()!=""){
           try{
               user->sendMessage("a",std::pair(ui->serchtxt->text().toStdString(),user->type::user));

               show_messeg(user->getChats()[std::pair(ui->serchtxt->text().toStdString(),user->type::user)]);

               ui->serchtxt->clear();

           }
            catch (...) {
           ui->serchtxt->setText("dorosteshkon");
           }
       }*/



    for (it=user->getChats().begin();it!=user->getChats().end();it++){
        if(it->first.first==id.toStdString())
            break;
    }
    if(it!=user->getChats().end()){
    if(it->first.second==User::type::user){
        show_messeg(it->second);
    ui->type->setMaximumSize(1234,1234);
    ui->user->setMaximumSize(1234,1234);

    }
    if(it->first.second==User::type::channel){
            show_messeg(it->second);
           if( std::string(it->second[0]["src"])==name.toStdString());
    ui->type->setMaximumSize(1234,1234);
    ui->user->setMaximumSize(1234,1234);

    }
    if(it->second==User::type::group){
       show_messeg(it->second);

    ui->type->setMaximumSize(1234,1234);
    ui->user->setMaximumSize(1234,1234);

    }
     ui->username->setText(QString::fromStdString(it->first.first));

    //this->show_messeg(messeges);

  //  for(it=contact.begin();it!=contact.end();it++){j++;
  //      if(it==sender())
  //   break;
   }
   }

void asly::showcontact(){
    ui->contactgroup->clear();
    std::map<std::pair<std::string, User::type>, std::vector<nlohmann::json>>::iterator it;
    for (it=user->getChats().begin();it!=user->getChats().end();it++){
        QListWidgetItem*z=new QListWidgetItem;

        z->setText(QString::fromStdString(it->first.first));
        ui->contactgroup->addItem(z);
}
     //qDeleteAll(ui->contactgroup->findChildren<QWidget *>(QString(), Qt::FindDirectChildrenOnly));
     //qDeleteAll(ui->contactgroup->findChildren<QBoxLayout *>(QString(), Qt::FindDirectChildrenOnly));
    // clearLayout( ui->contactgroup->layout(),true);
   /*   RemoveLayout(ui->contactgroup);
                                                   QVBoxLayout *Lay = NULL;
      Lay = new QVBoxLayout;
 QSpacerItem* horizSpacer=NULL;
      horizSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
     //Lay->addSpacerItem(horizSpacer);
     this->ui->scrollArea->setWidgetResizable(true);
     //this->ui->scrollArea->setWidget(this->ui->contactgroup);
     std::map<std::pair<std::string, User::type>, std::vector<nlohmann::json>>::iterator it;
     for (it=user->getChats().begin();it!=user->getChats().end();it++){


    QHBoxLayout *Lay2 =NULL;
    Lay2 = new QHBoxLayout;
    QSpacerItem* horizSpacer2 =NULL;
    horizSpacer2 = new QSpacerItem(0,0, QSizePolicy::Minimum, QSizePolicy::Expanding);
    QGroupBox* con=NULL;
    con=new QGroupBox;
    //con->clearMask();
    QPushButton* ax=NULL;QPushButton* esm=NULL;
    ax=new QPushButton;
    esm=new QPushButton;
    ax->setMinimumSize(20,20);
     esm->setMinimumSize(280,20);
     con->setMinimumSize(100,40);
     con->setStyleSheet("font: 900 11pt Segoe UI Black;"
                        "color: rgb(255, 255, 255);");
    ax->setStyleSheet("font: 900 11pt Segoe UI Black;"
                      "color: rgb(255, 255, 255);");
    esm->setStyleSheet("background-color: rgb(120, 255, 140);"
                       );
    esm->setText(QString::fromStdString(it->first.first));
    //esm->setFlat();
    //ax->setFlat(true);
    //ax->setDisabled(true);


    con->setLayout(Lay2);

    Lay2->addWidget(esm);
    Lay2->addWidget(ax); Lay2->addSpacerItem(horizSpacer2);
 Lay->addWidget(con);

    connect(esm,SIGNAL(clicked()),this,SLOT(on_contact_clicked(esm->text())));

     }Lay->addSpacerItem(horizSpacer);ui->contactgroup->show();
                                                   ui->contactgroup->setLayout(Lay);*/
     }
void asly::show_messeg( QListWidgetItem* id){int i=0;ui->chatarea->clear();QTimer* time=new QTimer;
    std::vector<nlohmann::json> messeges;
    auto it=user->getChats().begin();
    for(it=user->getChats().begin();it!=user->getChats().end();it++)
      if(it->first.first==id->text().toStdString())break;
    it->second=messeges;
    connect(time,SIGNAL(timeout()),this,SLOT(show_messeg(messeges)));
     timer->start(5000); connect(ui->username,SIGNAL(objectNamechenged()),this,SLOT(deleteQTimer(time)));

}

void asly::show_messeg( std::vector<nlohmann::json> messeges)
{int i=0;ui->chatarea->clear();QTimer* time=new QTimer;
        connect(time,SIGNAL(timeout()),this,SLOT(show_messeg(messeges)));
         timer->start(5000); connect(ui->username,SIGNAL(objectNamechenged()),this,SLOT(deleteQTimer(time)));

      for(i=0;i!=int(messeges.size());i++)
          ui->chatarea->addItem(QString::fromStdString(std::string(messeges[i]["src"])+'\n'+std::string(messeges[i]["body"])));
   /* int i=0;
    qDeleteAll(ui->s->findChildren<QWidget *>(QString(), Qt::FindDirectChildrenOnly));
    for(i=0;i!=messeges.size();i++){
 QVBoxLayout *Lay = new QVBoxLayout; QSpacerItem* horizSpacer = new QSpacerItem(4000, 40000, QSizePolicy::Minimum, QSizePolicy::Expanding);
  ui->safhechat->setLayout(Lay);
  Lay->addSpacerItem(horizSpacer);
   QHBoxLayout *Lay2 = new QHBoxLayout;
   QSpacerItem* horizSpacer2 = new QSpacerItem(4000, 40000, QSizePolicy::Minimum, QSizePolicy::Expanding);
   QGroupBox* mess=new QGroupBox;
   mess->setMaximumHeight(150);
   QTextEdit*messa=new QTextEdit;
   messa->setStyleSheet("border-radius:7px;"
                         "background-color: rgb(201, 209, 213);"
                         "TextMargins:2px;"
                         "padding-left:4px;"
                         "font: 900 9pt Segoe UI Black;");
   messa->setReadOnly(true);
   messa->setText(QString::fromStdString(std::string(messeges[i]["src"])+'\n'+std::string(messeges[i]["body"])+'\n'+std::string(messeges[i]["date"])));
   messa->setMaximumSize(400,150);
   if(messeges[i]["src"]==name.toStdString()){
       mess->setLayout(Lay2);
       Lay2->addSpacerItem(horizSpacer2);
       Lay2->addWidget(messa);
   }
   else{
       mess->setLayout(Lay2);
     Lay2->addWidget(messa);
     Lay2->addSpacerItem(horizSpacer2);
   }
}
*/
}
void asly::deletQTimer(QTimer* Q){delete Q;}
asly::~asly()
{
    delete ui;
}

void asly::on_pushButton_2_clicked()
{
    try{
    std::string esm=ui->esmsh->text().toStdString();
    user->joinChat(std::pair(esm,User::type::channel));
}catch(std::runtime_error &e){

    }
    showcontact();

}


void asly::on_safejadid_clicked()
{
    ui->setting->setMaximumSize(12342,12321);
}


void asly::on_pushButton_16_clicked()
{
    ui->setting->setMaximumSize(QSize(0,0));
    ui->setting->setMinimumSize(QSize(0,0));
}


void asly::on_pushButton_14_clicked()
{
    ui->setting->setMaximumSize(QSize(0,0));
    ui->setting->setMinimumSize(QSize(0,0));
    ui->userinformation->setMaximumSize(QSize(1234,1234));
}


void asly::on_pushButton_20_clicked()
{
    ui->setting->setMaximumSize(QSize(1234,1234));
    ui->userinformation->setMaximumSize(QSize(0,0));
    ui->userinformation->setMinimumSize(QSize(0,0));
}


void asly::on_send_clicked()
{
    int i=0;
    if(ui->textEdit!=NULL){

        QString mass=ui->textEdit-> toPlainText();
        ui->textEdit->clear();
        QString dsn=name;ui->username->text();
        std::map<std::pair<std::string, User::type>, std::vector<nlohmann::json>>::iterator it;
        for (it=user->getChats().begin();it!=user->getChats().end();it++){
            if(dsn.toStdString()==it->first.first)break;
        }

        if(it!=user->getChats().end()){
            if(it->first.second==User::type::user){
             user->sendMessage(mass.toStdString(),it->first);


            }
            if(it->first.second==User::type::group){

             user->sendMessage(mass.toStdString(),it->first);

            }
            if(it->first.second==User::type::channel){
               user->sendMessage(mass.toStdString(),it->first);

            }
        }





    }
}


//void asly::on_serchtxt_textChanged(const QString &arg1)
//{ if(ui->serchtxt->text().toStdString()=="")
//    {
//        showcontact(user->getChats());
//        return;
//    }
//    std::string serch=ui->serchtxt->text().toStdString();
//    std::vector<absChat*>ser;
//     int it;
//     for(it=user->getChats().size();it!=0;it--){
//
//         if(user->getChats()[it]->getID()==serch)
//             ser.push_back(user->getChats()[it]);
//     }
//     showcontact(ser);
//}


void asly::on_doserch_clicked()
{
    QString id=ui->serchtxt->text();
        try{
            user->sendMessage("a",std::pair(ui->serchtxt->text().toStdString(),user->type::user));

            show_messeg(user->getChats()[std::pair(ui->serchtxt->text().toStdString(),user->type::user)]);

            ui->serchtxt->clear();
            showcontact();

        }
         catch (...) {
        ui->serchtxt->setText("dorosteshkon");
        }
    }


void asly::on_chanel_clicked()
{
       try{
       std::string esm=ui->lineEdit->text().toStdString();
       user->createChat(std::pair(esm,User::type::channel)); user->joinChat(std::pair(esm,User::type::channel));
        user->sendMessage("a",std::pair(ui->lineEdit->text().toStdString(),user->type::channel));

   }catch(std::runtime_error &e){

       }
       showcontact();

}


void asly::on_gruop_clicked()
{
    try{
    std::string esm=ui->lineEdit->text().toStdString();
    user->createChat(std::pair(esm,User::User::group));// user->joinChat(std::pair(esm,User::type::group));
    user->sendMessage("a",std::pair(ui->lineEdit->text().toStdString(),User::group));

}catch(std::runtime_error &e){

    }
    showcontact();
}


void asly::on_sakht_clicked()
{
    ui->setting->setMaximumSize(0,0);
    ui->sakhtcg->setMaximumSize(1234,1234);
}


void asly::on_logout_clicked()
{
    user->logout();
    exit(0);
}


void asly::on_back_clicked()
{
    ui->sakhtcg->setMaximumSize(0,0);
}
void asly:: clearLayout(QLayout* layout, bool deleteWidgets)
{
    while (QLayoutItem* item = layout->takeAt(0))
    {
        if (deleteWidgets)
        {
            if (QWidget* widget = item->widget())
                widget->deleteLater();
        }
        if (QLayout* childLayout = item->layout())
            clearLayout(childLayout, deleteWidgets);
        delete item;
    }
}
void asly::RemoveLayout (QWidget* widget)
{
    QLayout* layout = widget->layout ();
    if (layout != 0)
    {
    QLayoutItem *item;
    while ((item = layout->takeAt(0)) != 0)
        layout->removeItem (item);
    delete layout;
    }
}

void asly::on_jgroup_clicked()
{       try{
        std::string esm=ui->esmsh->text().toStdString();
        user->joinChat(std::pair(esm,User::type::group));
    }catch(std::runtime_error &e){

        }
        showcontact();


}

