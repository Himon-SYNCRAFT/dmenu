/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
static int colorprompt = 0;                /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
    /* catppuccin */
	/* [SchemeNorm] = { "#CAD3F5", "#24273A" }, */
	/* [SchemeSel] = { "#24273A", "#f0c6c6" }, */
	/* [SchemeOut] = { "#CAD3F5", "#ED8796" }, */

    /* TokyoNight */
	[SchemeNorm] = { "#c0caf5", "#24283b" },
	[SchemeSel] = { "#24283b", "#7aa2f7" },
	[SchemeOut] = { "#c0caf5", "#f7768e" },

    /* Kanagawa */
	/* [SchemeNorm] = { "#dcd7ba", "#1f1f28" }, */
	/* [SchemeSel] = { "#1f1f28", "#6a9589" }, */
	/* [SchemeOut] = { "#dcd7ba", "#c34043" }, */
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 10;
static unsigned int columns    = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 10 * 2 + (10 / 2);
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
