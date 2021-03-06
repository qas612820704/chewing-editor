
/*
 * chewing-editor: Chewing userphrase editor
 * Copyright (C) 2014 Chewing Development Team

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#pragma once

#include <memory>
#include <QDialog>

namespace Ui {
    class UserphraseDialog;
}

class UserphraseDialog final: public QDialog
{
    Q_OBJECT

public:
    explicit UserphraseDialog(QWidget *parent = 0);
    UserphraseDialog(const UserphraseDialog&) = delete;
    UserphraseDialog& operator=(const UserphraseDialog&) = delete;
    ~UserphraseDialog(); // = default;

    QString getPhrase() const;
    QString getBopomofo() const;

    void setText(const QString& phrase, const QString& bopomofo);

private:
    void setupConnect();
    std::unique_ptr<Ui::UserphraseDialog> ui_;
};
