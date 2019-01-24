/*
    Computer Vision Sandbox

    Copyright (C) 2011-2019, cvsandbox
    http://www.cvsandbox.com/contacts.html

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#pragma once
#ifndef CVS_PROPERTY_PAGES_DIALOG_HPP
#define CVS_PROPERTY_PAGES_DIALOG_HPP

#include <QDialog>

namespace Ui
{
    class PropertyPagesDialog;
}

namespace Private
{
    class PropertyPagesDialogData;
}

class WizardPageFrame;


class PropertyPagesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PropertyPagesDialog( const QString& propertiesCollectionName, QWidget *parent = 0 );
    ~PropertyPagesDialog();

    // Add page to the properties dialog
    void AddPage( WizardPageFrame* page );

protected:
    void closeEvent( QCloseEvent* event );

    virtual void ApplyCurrentPage( int index );
    virtual void ApplyAllPages( );

public slots:
    virtual void accept( );
    virtual void reject( );

private slots:
    void on_wizardPage_CompleteStatusChanged( bool canGoNext );

    void on_applyButton_clicked( );
    void on_okButton_clicked( );
    void on_cancelButton_clicked( );
    void on_tabWidget_currentChanged( int index );
    void on_helpButton_clicked( );

private:
    void UpdateDialogButtonsStatus( );

private:
    Ui::PropertyPagesDialog*            ui;
    Private::PropertyPagesDialogData*   mData;
};

#endif // CVS_PROPERTY_PAGES_DIALOG_HPP
