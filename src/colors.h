namespace ntcolors {
  // Reset colors:
  const char* reset  = "\033[0m";

  // Text styles
  const char* bold       = "\x1B[1m";
  const char* dim        = "\x1B[2m";
  const char* italic     = "\x1B[3m";
  const char* underline  = "\x1B[4m";
  const char* blink      = "\x1B[5m";
  const char* inverse    = "\x1B[7m";

  // FG colors:
  const char* fg_red     = "\033[31m";
  const char* fg_green   = "\033[32m";
  const char* fg_yellow  = "\033[33m";
  const char* fg_blue    = "\033[34m";
  const char* fg_white   = "\033[37m";
  const char* fg_black   = "\033[30m";
  const char* fg_purpur  = "\033[35m";
  const char* fg_cyan    = "\033[36m";

  // FG bright colors:
  const char* fg_bright_black   = "\x1B[90m";
  const char* fg_bright_red     = "\x1B[91m";
  const char* fg_bright_green   = "\x1B[92m";
  const char* fg_bright_yellow  = "\x1B[93m";
  const char* fg_bright_blue    = "\x1B[94m";
  const char* fg_bright_magenta = "\x1B[95m";
  const char* fg_bright_cyan    = "\x1B[96m";
  const char* fg_bright_white   = "\x1B[97m";

  // BG colors:
  const char* bg_red    = "\x1B[41m";
  const char* bg_green  = "\x1B[42m";
  const char* bg_yellow = "\x1B[43m";
  const char* bg_blue   = "\x1B[44m";
  const char* bg_white  = "\x1B[42m";
  const char* bg_black  = "\x1B[40m";
  const char* bg_purpur = "\x1B[42m";
  const char* bg_cyan   = "\x1B[42m";

  // BG bright colors:
  const char* bg_bright_black   = "\x1B[100m";
  const char* bg_bright_red     = "\x1B[101m";
  const char* bg_bright_green   = "\x1B[102m";
  const char* bg_bright_yellow  = "\x1B[103m";
  const char* bg_bright_blue    = "\x1B[104m";
  const char* bg_bright_magenta = "\x1B[105m";
  const char* bg_bright_cyan    = "\x1B[106m";
  const char* bg_bright_white   = "\x1B[107m";
};
