//SpreadsheetCell.h - in which each cell can store a single number
//                    can contain string which needs to be converted to a text value otherwise a 0 is stored.
#pragma once
#include <string>
#include <string_view>

class SpreadsheetCell
{
    public:
        SpreadsheetCell() = default;
        SpreadsheetCell(double initialValue);
        SpreadsheetCell(std::string_view initialValue);
        void setValue(double inValue);
        double getValue() const;

        //if compiler is not c++17 complatible then string_view should be replaced by std::string&
        void setString(std::string_view inString);
        std::string getString() const;
    private:
        std::string doubleToString(double inValue) const;
        double stringToDouble(std::string_view inString) const;
        double mValue;
};
