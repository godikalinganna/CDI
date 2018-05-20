// Copyright (c) 2011-2013 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_QT_ASKPASSCDIASEDIALOG_H
#define BITCOIN_QT_ASKPASSCDIASEDIALOG_H

#include <QDialog>

class WalletModel;

namespace Ui
{
class AskPasscdiaseDialog;
}

/** Multifunctional dialog to ask for passcdiases. Used for encryption, unlocking, and changing the passcdiase.
 */
class AskPasscdiaseDialog : public QDialog
{
    Q_OBJECT

public:
    enum Mode {
        Encrypt,         /**< Ask passcdiase twice and encrypt */
        UnlockAnonymize, /**< Ask passcdiase and unlock only for anonymization */
        Unlock,          /**< Ask passcdiase and unlock */
        ChangePass,      /**< Ask old passcdiase + new passcdiase twice */
        Decrypt          /**< Ask passcdiase and decrypt wallet */
    };

    explicit AskPasscdiaseDialog(Mode mode, QWidget* parent, WalletModel* model);
    ~AskPasscdiaseDialog();

    void accept();

private:
    Ui::AskPasscdiaseDialog* ui;
    Mode mode;
    WalletModel* model;
    bool fCapsLock;

private slots:
    void textChanged();

protected:
    bool event(QEvent* event);
    bool eventFilter(QObject* object, QEvent* event);
};

#endif // BITCOIN_QT_ASKPASSCDIASEDIALOG_H
