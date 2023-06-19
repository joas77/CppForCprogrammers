#ifndef COMMON_H
#define COMMON_H

#include <functional>
#include <string_view>
#include <unistd.h>
#include <ctype.h>

constexpr size_t bufSize = 512;

struct Point{
    int row, col;
    Point() : row{0}, col{0} {}
    Point(int r, int c) : row{r}, col{r} {}
    void Offset(int r, int c) { row += r; col += c; }
};

enum class Mode // Pen mode
{
    defPen      = 0x0000,   // predinfined pen
    graphPen    = 0x0100,   // graphical pen
    revsPen     = 0x0200,   // reversed video pen
    charMask    = 0x00FF,   // characters mask
    modeMask    = 0xFF00,   // mode pen mask
};

enum class ErrKind {
    memErr, termErr, sysErr
};

using ErrFun=std::function<void(ErrKind, const std::string&)>;

// VT100 terminal control codes
constexpr std::string_view alfaCode     = "\017";           // normal characteres
constexpr std::string_view graphCode    = "\016";           // graphical characteres
constexpr std::string_view plainCode    = "\033[0m";        // plain video
constexpr std::string_view revsCode     = "\033[7m";        // reversed vide
constexpr std::string_view defCode      = "\017\033[0m";

#endif /* COMMON_H */