#pragma once
//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

/*
 -> This project is now EOL, for new bases and releases be sure to visit: https://lodelight.com
*/

#define	NEUZ_TITLE	"[VS22] Lodelight V15"				//: Window title of the client.
#define	NEUZ_BHASH	"sunkist"							//: String to boot the client.
#define	NEUZ_IPSET	"127.0.0.1"							//: Ip of the server, must match AccountServer.ini & LoginServer.ini.
#define	NEUZ_CPORT	"5400"								//: Cache port, must match CacheServer.ini.
#define	NEUZ_PHASH	"kikugalanet"						//: Md5 password salt.
#define	NEUZ_MSGVR	"20100412"							//: Ver of the server, must match AccountServer.ini & LoginServer.ini.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#define WEB_FIRST_PAGE	"http://mycoolflyff.com/index.html"
#define SERVER_ROOT		"/RESCLIENT/"
#define PATCHSEVER_URL	"patcher.mycoolflyff.com"
#define HOME_LINK		"http://mycoolflyff.com/"
#define REGISTER_LINK	"http://mycoolflyff.com/register.html"

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

#define COLOR_ADMINISTRATOR     0xFFFF4500				//: Name coloring of admin characters.
#define	TITLE_ADMINISTRATOR		"[Admin]"				//: Title for admin characters.

#define COLOR_GAMEMASTER        0xFFFF4500				//: Name coloring of gm characters.
#define	TITLE_GAMEMASTER		"[Gm]"					//: Title for gm characters.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-

enum { ENCHANT_TIME = 1 };											//: Adjust the time of upgrading.

//|: ~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-