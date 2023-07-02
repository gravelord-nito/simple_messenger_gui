#include "asly.h"
#include "ui_asly.h"//dokme ha adrezan pass mosavi bezary ye dokme ro neshon midan pash mishe fahmid kodoom ro zade
#include <QTime>
asly::asly(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::asly)
{
    ui->setupUi(this);
    ui->user->hide();
    ui->type->hide();
    ui->username_2->setText(name);

}

void asly::on_contact_clicked(QString id){int j=0; int iz;
       if(ui->serchtxt->text().toStdString()!=""){
           ui->serchtxt->clear();
           for(iz=user->getChats().size();iz!=0;iz--){

               if(user->getChats()[iz]->getID()==id.toStdString()){
                   //user->addChat();
               show_messeg(user->getChats()[iz]->getMessages());   ui->username->setText(QString::fromStdString(user->getChats()[iz]->getID()));
               break;
               }
           }
       }

       else{
       for(iz=user->getChats().size();iz!=0;iz--){

           if(user->getChats()[iz]->getID()==id.toStdString()){
           show_messeg(user->getChats()[iz]->getMessages());
           break;
           }
       }
       }
    if(dynamic_cast<Chat*>(user->getChats()[iz])!=NULL){
    ui->type->show();
    ui->user->show();

    }
    if(dynamic_cast<Group*>(user->getChats()[iz])!=NULL){
    ui->type->show();
    ui->user->show();

    }
    if(dynamic_cast<Channel*>(user->getChats()[iz])!=NULL){
        Channel* temp=dynamic_cast<Channel*>(user->getChats()[iz]);
        if(temp->getMessages()[0]->src==name.toStdString())
    ui->type->show();
    ui->user->show();

    }
    std::vector<QPushButton* > contacts;
    //this->show_messeg(messeges);
    std::vector<QPushButton>::iterator it;
  //  for(it=contact.begin();it!=contact.end();it++){j++;
  //      if(it==sender())
  //   break;
   // }

}
void asly::showcontact(std::vector<absChat*>ser){ std::vector<QPushButton* > contacts;
     //qDeleteAll(ui->contactgroup->findChildren<QWidget *>(QString(), Qt::FindDirectChildrenOnly));
     //qDeleteAll(ui->contactgroup->findChildren<QBoxLayout *>(QString(), Qt::FindDirectChildrenOnly));
    // clearLayout( ui->contactgroup->layout(),true);
       RemoveLayout(ui->contactgroup);
                                                   QVBoxLayout *Lay = NULL;
      Lay = new QVBoxLayout;
 QSpacerItem* horizSpacer=NULL;
      horizSpacer = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);
     //Lay->addSpacerItem(horizSpacer);
     this->ui->scrollArea->setWidgetResizable(true);
     //this->ui->scrollArea->setWidget(this->ui->contactgroup);
     for (int j=0;j<int(ser.size());j++){


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
    esm->setText(QString::fromStdString(ser[j]->getID()));
    esm->setFlat(false);
    ax->setFlat(true);
    ax->setDisabled(true);


    con->setLayout(Lay2);

    Lay2->addWidget(esm);
    Lay2->addWidget(ax); Lay2->addSpacerItem(horizSpacer2);
 Lay->addWidget(con);

    connect(esm,SIGNAL(clicked()),this,SLOT(on_contact_clicked(esm->text())));

     }Lay->addSpacerItem(horizSpacer);
                                                   ui->contactgroup->setLayout(Lay);
     }


void asly::show_messeg(std::vector<Message* > messeges)
{
    int i=0;
    qDeleteAll(ui->safhechat->findChildren<QWidget *>(QString(), Qt::FindDirectChildrenOnly));
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
   messa->setText(QString::fromStdString(messeges[i]->src+"\n"+messeges[i]->body+"\n                        "+messeges[i]->date));
   messa->setMaximumSize(400,150);
   if(messeges[i]->src==name.toStdString()){
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
}
asly::~asly()
{
    delete ui;
}

void asly::on_pushButton_2_clicked()
{

}


void asly::on_safejadid_clicked()
{
    ui->setting->setMaximumSize(QSize(12342,12321));
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
        QString src=name;
        while(true){
        if(user->getChats()[i]->getID()==ui->username->text().toStdString()){
            if(dynamic_cast<Chat*>(user->getChats()[i])!=NULL){
             user->sendMessage<Chat>(mass.toStdString(),user->getChats()[i]); i++;


            }
            if(dynamic_cast<Group*>(user->getChats()[i])!=NULL){

             user->sendMessage<Group>(mass.toStdString(),user->getChats()[i]); i++;

            }
            if(dynamic_cast<Channel*>(user->getChats()[i])!=NULL){
                user->sendMessage<Channel>(mass.toStdString(),user->getChats()[i]); i++;

            }
        }
            i++;
        break;

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
    QString id=ui->serchtxt->text();try{
    user->joinChannel<Channel>(id.toStdString());
    }
    catch(std::runtime_error &e){
        try{
         user->joinChannel<Group>(id.toStdString());
        }
        catch(std::runtime_error &e){
            try{
             Chat* cha=new Chat(id.toStdString());
                           user->sendMessage<Chat>("s",cha);
                           user->addChat(cha);
            }
            catch(std::runtime_error &e){ui->serchtxt->setText("dorostesh kon");}
        }
    }

}


void asly::on_chanel_clicked()
{
    Channel* gr;
       std::string esm=ui->esmsh->text().toStdString();
       gr=user->createChat<Channel>(esm);
       user->sendMessage<Channel>("a",gr);
       user->addChat(gr);
       showcontact(user->getChats());


}


void asly::on_gruop_clicked()
{   Group* gr;
    try{
    std::string esm=ui->esmsh->text().toStdString();
    gr=user->createChat<Group>(esm);
    user->sendMessage<Group>("a",gr);
}catch(std::runtime_error &e){

    }
    user->addChat(gr);
    showcontact(user->getChats());
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
