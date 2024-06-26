#pragma once

#include "../Statement.h"
#include "../Expression.h"

class CaseStatement : public Statement {
public:
    int value;
    Statement *statement;

    CaseStatement(int value, Statement *statement);
    ~CaseStatement() override;
    StatementClass getClass() override;
};
