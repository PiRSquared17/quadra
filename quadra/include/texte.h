/* -*- Mode: C++; c-basic-offset: 2; tab-width: 2; indent-tabs-mode: nil -*-
 * Copyright (c) 1998-2000 Ludus Design enr.
 * All Rights Reserved.
 * Tous droits r�serv�s.
 */

#ifndef _HEADER_TEXTE
#define _HEADER_TEXTE
#include "stringtable.h"

#define ST_BASE(x) (stringtable->get(x-1))
#define ST_PLAYER ST_BASE(1)
#define ST_START ST_BASE(2)
#define ST_QUADRA ST_BASE(3)
#define ST_HEROES ST_BASE(4)
#define ST_SCORE ST_BASE(5)
#define ST_LINES ST_BASE(6)
#define ST_LEVEL ST_BASE(7)
#define ST_GOTHISCORE ST_BASE(8)
#define ST_HIGHESTSCORE ST_BASE(9)
#define ST_CREATEORJOIN ST_BASE(10)
#define ST_CLICKTOCREATE ST_BASE(11)
#define ST_CLICKTOJOIN ST_BASE(12)
#define ST_CLICKTOREFRESH ST_BASE(13)
#define ST_GAMESLIST ST_BASE(14)
#define ST_PLAYERINGAME ST_BASE(15)
#define ST_BACK ST_BASE(16)
#define ST_SELECTCONNECTION ST_BASE(17)
#define ST_LOCALGAME ST_BASE(18)
#define ST_INTERNET ST_BASE(19)
#define ST_SLOW ST_BASE(20)
#define ST_NORMAL ST_BASE(21)
#define ST_FAST ST_BASE(22)
#define ST_PRESSAKEY ST_BASE(23)
#define ST_PRESSLEFT ST_BASE(24)
#define ST_PRESSRIGHT ST_BASE(25)
#define ST_PRESSROTCCW ST_BASE(26)
#define ST_PRESSDOWN ST_BASE(27)
#define ST_PRESSROTCW ST_BASE(28)
#define ST_DEMOQUIT1 ST_BASE(29)
#define ST_DEMOQUIT2_1 ST_BASE(30)
#define ST_DEMOQUIT2_2 ST_BASE(31)
#define ST_DEMOQUIT2_3 ST_BASE(32)
#define ST_DEMOQUIT3 ST_BASE(33)
#define ST_DEMOQUIT4 ST_BASE(34)
#define ST_DEMOQUIT5 ST_BASE(35)
#define ST_DEMOQUIT6 ST_BASE(36)
#define ST_DEMOQUIT7 ST_BASE(37)
#define ST_DEMOQUIT8 ST_BASE(38)
#define ST_DEMOQUIT9 ST_BASE(39)
#define ST_DEMOQUIT10 ST_BASE(40)
#define ST_DEMOQUIT11 ST_BASE(41)
#define ST_DEMOQUIT12 ST_BASE(42)
#define ST_DEMOQUIT13 ST_BASE(43)
#define ST_DEMOQUIT14 ST_BASE(44)
#define ST_DEMOQUIT15 ST_BASE(45)
#define ST_DEMOQUIT16 ST_BASE(46)
#define ST_DEMOQUIT17 ST_BASE(47)
#define ST_HELP1 ST_BASE(48)
#define ST_HELP2 ST_BASE(49)
#define ST_HELP3 ST_BASE(50)
#define ST_HELP4 ST_BASE(51)
#define ST_HELP5 ST_BASE(52)
#define ST_HELP6 ST_BASE(53)
#define ST_HELP7 ST_BASE(54)
#define ST_HELP8 ST_BASE(55)
#define ST_HELP9 ST_BASE(56)
#define ST_HELP10 ST_BASE(57)
#define ST_HELP11 ST_BASE(58)
#define ST_HELP12 ST_BASE(59)
#define ST_HELP13 ST_BASE(60)
#define ST_HELP14 ST_BASE(61)
#define ST_HELP15 ST_BASE(62)
#define ST_HELP16 ST_BASE(63)
#define ST_HELP17 ST_BASE(64)
#define ST_HELP18 ST_BASE(65)
#define ST_HELP19 ST_BASE(66)
#define ST_HELP20 ST_BASE(67)
#define ST_HELP21 ST_BASE(68)
#define ST_HELP22 ST_BASE(69)
#define ST_INTRO1 ST_BASE(70)
#define ST_INTRO2 ST_BASE(71)
#define ST_INTRO3 ST_BASE(72)
#define ST_INTRO4 ST_BASE(73)
#define ST_INTRO5 ST_BASE(74)
#define ST_INTRO6 ST_BASE(75)
#define ST_INTRO7 ST_BASE(76)
#define ST_INTRO8 ST_BASE(77)
#define ST_INTRO9 ST_BASE(78)
#define ST_INTRO10 ST_BASE(79)
#define ST_INTRO11 ST_BASE(80)
#define ST_ENDGAMETITLE ST_BASE(81)
#define ST_FORTHETEAM ST_BASE(82)
#define ST_DEMOSTAT1 ST_BASE(83)
#define ST_DEMOSTAT2 ST_BASE(84)
#define ST_STARTBOB ST_BASE(85)
#define ST_SHOWPLAYER ST_BASE(86)
#define ST_BLOCKINFO ST_BASE(87)
#define ST_LINESINFO ST_BASE(88)
#define ST_SELECTSCHEME ST_BASE(89)
#define ST_CHATWINDOW ST_BASE(90)
#define ST_DEMOSEND ST_BASE(91)
#define ST_CLOSE ST_BASE(92)
#define ST_SENDLINES ST_BASE(93)
#define ST_BOBJOIN ST_BASE(94)
#define ST_TEAM1 ST_BASE(95)
#define ST_TEAM2 ST_BASE(96)
#define ST_TEAM3 ST_BASE(97)
#define ST_TEAM4 ST_BASE(98)
#define ST_TEAM5 ST_BASE(99)
#define ST_TEAM6 ST_BASE(100)
#define ST_TEAM7 ST_BASE(101)
#define ST_BOBDIED ST_BASE(102)
#define ST_GAMESCORE ST_BASE(103)
#define ST_GAMELINES ST_BASE(104)
#define ST_GAMELEVEL ST_BASE(105)
#define ST_GAMEDEATHS ST_BASE(106)
#define ST_GAMEFRAGS ST_BASE(107)
#define ST_CREATEGAMETITLE ST_BASE(108)
#define ST_STARTGAME ST_BASE(109)
#define ST_JOINGAMETITLE ST_BASE(110)
#define ST_CLEARINFO1 ST_BASE(111)
#define ST_CLEARINFO2 ST_BASE(112)
#define ST_CLEARINFO3 ST_BASE(113)
#define ST_CLEARINFO4 ST_BASE(114)
#define ST_CLEARINFO5 ST_BASE(115)
#define ST_CLEARINFO6 ST_BASE(116)
#define ST_CLEARINFO7 ST_BASE(117)
#define ST_CLEARINFO8 ST_BASE(118)
#define ST_CLEARINFO9 ST_BASE(119)
#define ST_CLEARINFO10 ST_BASE(120)
#define ST_CLEARINFO11 ST_BASE(121)
#define ST_CLEARINFO12 ST_BASE(122)
#define ST_CLEARINFO13 ST_BASE(123)
#define ST_CLEARINFO14 ST_BASE(124)
#define ST_CLEARINFOMORE ST_BASE(125)
#define ST_TOTAL ST_BASE(126)
#define ST_CLEARDOUBLE ST_BASE(127)
#define ST_CLEARTRIPLE ST_BASE(128)
#define ST_CLEARQUAD ST_BASE(129)
#define ST_CLEARMORE ST_BASE(130)
#define ST_UNKNOWN ST_BASE(131)
#define ST_SELECTCOLORSCHEME ST_BASE(132)
#define ST_FROMLEVEL ST_BASE(133)
#define ST_SELECTTEAM ST_BASE(134)
#define ST_PLAYERINTEAM ST_BASE(135)
#define ST_BOBTEAM2 ST_BASE(136)
#define ST_NOPLAYERJOINED ST_BASE(137)
#define ST_FROM ST_BASE(138)
#define ST_TO ST_BASE(139)
#define ST_ALLTEAM ST_BASE(140)
#define ST_ENTERADDRESS ST_BASE(141)
#define ST_LOOKINGFORHOST ST_BASE(142)
#define ST_CLICKTOCANCEL ST_BASE(143)
#define ST_ERRORLOOKING ST_BASE(144)
#define ST_ENTERGAMENAME ST_BASE(145)
#define ST_WAITINGTOJOIN ST_BASE(146)
#define ST_ENTERINTERNETPORT ST_BASE(147)
#define ST_WAITJOINGAME ST_BASE(148)
#define ST_JOINREFUSED ST_BASE(149)
#define ST_JOINREFUSED2 ST_BASE(150)
#define ST_WAITJOINGAME2 ST_BASE(151)
#define ST_PAUSEDBYBOB ST_BASE(152)
#define ST_SERVER ST_BASE(153)
#define ST_BOBFRAGBOB ST_BASE(154)
#define ST_GAMEBOBCREATED ST_BASE(155)
#define ST_GAMEBOBJOINED ST_BASE(156)
#define ST_WAITJOINGAME3 ST_BASE(157)
#define ST_WAITJOINGAMEDELAY ST_BASE(158)
#define ST_NETERROR ST_BASE(159)
#define ST_NETERROR2 ST_BASE(160)
#define ST_NETWORKDOWN ST_BASE(161)
#define ST_SENDUDPFAILED ST_BASE(162)
#define ST_JOINGAMEFAILED ST_BASE(163)
#define ST_CREATESERVERFAILED ST_BASE(164)
#define ST_CREATECLIENTFAILED ST_BASE(165)
#define ST_SERVERTOOL ST_BASE(166)
#define ST_DROPPLAYER ST_BASE(167)
#define ST_DROPCONNECTION ST_BASE(168)
#define ST_ACCEPTPLAYER ST_BASE(169)
#define ST_ACCEPTCONNECTION ST_BASE(170)
#define ST_YES ST_BASE(171)
#define ST_NO ST_BASE(172)
#define ST_DROPTHISPLAYER ST_BASE(173)
#define ST_BOBWASDROP ST_BASE(174)
#define ST_PLAYERJOINREFUSED ST_BASE(175)
#define ST_PLAYERJOINREFUSED2 ST_BASE(176)
#define ST_DROPTHISCONNECTION ST_BASE(177)
#define ST_SELECTCDMUSIC ST_BASE(178)
#define ST_CDMUSIC1 ST_BASE(179)
#define ST_CDMUSIC2 ST_BASE(180)
#define ST_CDMUSIC3 ST_BASE(181)
#define ST_GAMEOPTION ST_BASE(182)
#define ST_NOTEPORTNUMBER ST_BASE(183)
#define ST_TUTORIALTITLE ST_BASE(184)
#define ST_TUTORIALNEXT ST_BASE(185)
#define ST_TUTORIALBEGIN ST_BASE(186)
#define ST_JOINDOWNLOADING ST_BASE(346)
#define ST_SHOWWHAT ST_BASE(347)
#define ST_SHOWFRAG ST_BASE(348)
#define ST_SHOWSCORE ST_BASE(349)
#define ST_SHOWLINE ST_BASE(350)
#define ST_SHOWBLOC ST_BASE(351)
#define ST_PLAYERJOINALREADY ST_BASE(352)
#define ST_PLAYERJOINALREADY2 ST_BASE(353)
#define ST_BOBINVALIDBLOCK ST_BASE(354)
#define ST_TESTPING ST_BASE(355)
#define ST_SETUPDATESPEED ST_BASE(356)
#define ST_SETUPDATESPEED2 ST_BASE(357)
#define ST_PINGDELAY ST_BASE(358)
#define ST_PINGMOYEN ST_BASE(359)
#define ST_SHOWMODE ST_BASE(360)
#define ST_SHOWMODEFULL ST_BASE(361)
#define ST_SHOWMODESMALL ST_BASE(362)
#define ST_SHOWSELECTED ST_BASE(363)
#define ST_QUIT ST_BASE(364)
#define ST_CHECKIP ST_BASE(365)
#define ST_CHECKIPTITLE ST_BASE(366)
#define ST_HOSTNAME ST_BASE(367)
#define ST_HOSTLIST ST_BASE(368)
#define ST_IPINFO ST_BASE(369)
#define ST_FASTER ST_BASE(370)
#define ST_INTRO12 ST_BASE(371)
#define ST_OLDERVERSION ST_BASE(372)
#define ST_NEWERVERSION ST_BASE(373)
#define ST_RESUMEBOB ST_BASE(374)
#define ST_YOUFRAGBOB ST_BASE(375)
#define ST_CLEANCANVAS ST_BASE(376)
#define ST_NOTQUADRASERVER ST_BASE(377)
#define ST_NOTQUADRASERVER2 ST_BASE(378)
#define ST_JOINOLDERVERSION ST_BASE(379)
#define ST_JOINOLDERVERSION2 ST_BASE(380)
#define ST_JOINNEWERVERSION ST_BASE(381)
#define ST_JOINNEWERVERSION2 ST_BASE(382)
#define ST_ADDRESSBOOKTITLE ST_BASE(383)
#define ST_CONNECT ST_BASE(384)
#define ST_LOOKINGFORBOB ST_BASE(385)
#define ST_SELECTGAMETYPE ST_BASE(386)
#define ST_GAMETYPE1 ST_BASE(387)
#define ST_GAMETYPE2 ST_BASE(388)
#define ST_GAMETYPE2DESC ST_BASE(389)
#define ST_GAMETYPE1DESC ST_BASE(390)
#define ST_GAMESPEED ST_BASE(391)
#define ST_GAMELEVELUP1 ST_BASE(392)
#define ST_GAMELEVELUP2 ST_BASE(393)
#define ST_GAMELEVELSTART ST_BASE(394)
#define ST_BOBWINFIRSTFRAG ST_BASE(395)
#define ST_CMDLINE ST_BASE(396)
#define ST_CMDLINE1 ST_BASE(397)
#define ST_CMDLINE2 ST_BASE(398)
#define ST_CMDLINE3 ST_BASE(399)
#define ST_CMDLINE4 ST_BASE(400)
#define ST_CMDLINE5 ST_BASE(401)
#define ST_CMDLINE6 ST_BASE(402)
#define ST_CMDLINE7 ST_BASE(403)
#define ST_RESULTFRAG ST_BASE(404)
#define ST_RESULTDEATH ST_BASE(405)
#define ST_PLAYBACK ST_BASE(406)
#define ST_SLOWPLAY ST_BASE(407)
#define ST_FASTPLAY ST_BASE(408)
#define ST_GAMEMINIMUM ST_BASE(409)
#define ST_CMDLINE8 ST_BASE(410)
#define ST_RESTART ST_BASE(411)
#define ST_BOBHASGONE ST_BASE(412)
#define ST_GAMEWILLSTART ST_BASE(413)
#define ST_GAMESTARTNOW ST_BASE(414)
#define ST_SERVERDECONNECT ST_BASE(415)
#define ST_REPLAYLASTGAME ST_BASE(416)
#define ST_STOPGAME ST_BASE(417)
#define ST_GAMEEND ST_BASE(418)
#define ST_PLAYERJOINREFUSED3 ST_BASE(419)
#define ST_PLAYERJOINREFUSED4 ST_BASE(420)
#define ST_SETGAMEEND ST_BASE(421)
#define ST_GAMEEND1 ST_BASE(422)
#define ST_GAMEEND2 ST_BASE(423)
#define ST_GAMEEND3 ST_BASE(424)
#define ST_GAMEENDFRAG ST_BASE(425)
#define ST_GAMEENDMINUTE ST_BASE(426)
#define ST_SETMOUSESPEED ST_BASE(427)
#define ST_ADDRESSBOOK ST_BASE(428)
#define ST_REFRESHINTERNET ST_BASE(429)
#define ST_RECEIVINGINTERNET ST_BASE(430)
#define ST_ALLOWPUBLICGAME ST_BASE(431)
#define ST_SAVESETTING ST_BASE(432)
#define ST_SETGAMESERVER ST_BASE(433)
#define ST_ADVANCEDOPTION ST_BASE(434)
#define ST_INVALIDSERVERADDRESS ST_BASE(435)
#define ST_INVALIDSERVERADDRESS2 ST_BASE(436)
#define ST_DEFAULTGAMESERVER ST_BASE(437)
#define ST_QUADRAVERSION ST_BASE(438)
#define ST_NOTREGISTERED ST_BASE(439)
#define ST_NOSERVERFOUND ST_BASE(440)
#define ST_NOSERVERFOUND2 ST_BASE(441)
#define ST_INVALIDSERVERRESPONSE ST_BASE(442)
#define ST_GAMENOTPUBLIC ST_BASE(443)
#define ST_NETWORKERRORLOOKINGBOB ST_BASE(444)
#define ST_REGISTER1 ST_BASE(445)
#define ST_REGISTER2 ST_BASE(446)
#define ST_REGISTER3 ST_BASE(447)
#define ST_REGISTER4 ST_BASE(448)
#define ST_REGISTER5 ST_BASE(449)
#define ST_REGISTER6 ST_BASE(450)
#define ST_REGISTER7 ST_BASE(451)
#define ST_REGISTER8 ST_BASE(452)
#define ST_REGISTER9 ST_BASE(453)
#define ST_REGISTER10 ST_BASE(454)
#define ST_CLICKREGISTER ST_BASE(455)
#define ST_THANKSREGISTER ST_BASE(456)
#define ST_SELECTLANGUAGE ST_BASE(457)
#define ST_ENGLISH ST_BASE(458)
#define ST_FRENCH ST_BASE(459)
#define ST_CREDIT1 ST_BASE(460)
#define ST_CREDIT2 ST_BASE(461)
#define ST_NAME ST_BASE(462)
#define ST_PASSWORD ST_BASE(463)
#define ST_PASSWORDINVALID ST_BASE(464)
#define ST_SECONDSREMAINING ST_BASE(465)
#define ST_NEXTPAGE ST_BASE(466)
#define ST_COMMANDLINEPARAM ST_BASE(467)
#define ST_CMDLINE9 ST_BASE(468)
#define ST_CMDLINE10 ST_BASE(469)
#define ST_UPDATINGGAMESERVER ST_BASE(470)
#define ST_ONEMOMENTPLEASE ST_BASE(471)
#define ST_CMDLINE11 ST_BASE(472)
#define ST_CMDLINE12 ST_BASE(473)
#define ST_CMDLINE13 ST_BASE(474)
#define ST_GLOBALHIGH ST_BASE(475)
#define ST_SYNC ST_BASE(476)
#define ST_CONNECTFROMBOB ST_BASE(477)
#define ST_DISCONNECTFROMBOB ST_BASE(478)
#define ST_HIGHSTATUSNORMAL ST_BASE(479)
#define ST_HIGHSTATUSCONNECTING ST_BASE(480)
#define ST_HIGHSTATUSABORTED ST_BASE(481)
#define ST_HIGHSTATUSCOMPLETED ST_BASE(482)
#define ST_HIGHSTATUSRECEIVING ST_BASE(483)
#define ST_HIGHSTATUSCANCELED ST_BASE(484)
#define ST_HIGHBADSERVER ST_BASE(485)
#define ST_GAMENONAME ST_BASE(486)
#define ST_GAMESTATUS ST_BASE(487)
#define ST_GAMESTATUSNOT ST_BASE(488)
#define ST_GAMESTATUSPLAY ST_BASE(489)
#define ST_GAMESTATUSTERM ST_BASE(490)
#define ST_LOCALNETWORK ST_BASE(491)
#define ST_CMDLINE14 ST_BASE(492)
#define ST_CMDLINE15 ST_BASE(493)
#define ST_CMDLINE16 ST_BASE(494)
#define ST_BOBREJOIN ST_BASE(495)
#define ST_DOWNLOADDECONNECT1 ST_BASE(496)
#define ST_DOWNLOADDECONNECT2 ST_BASE(497)
#define ST_STARTPLAYBACK ST_BASE(498)
#define ST_DEMOCENTRAL ST_BASE(499)
#define ST_CURRENTDIRECTORY ST_BASE(500)
#define ST_DEMOSIZE ST_BASE(501)
#define ST_DEMODATE ST_BASE(502)
#define ST_DEMOVERSION ST_BASE(503)
#define ST_DEMODURATION ST_BASE(504)
#define ST_DEMOTYPE ST_BASE(505)
#define ST_DEMOEND ST_BASE(506)
#define ST_DEMOBADFILE ST_BASE(507)
#define ST_DEMOSINGLE ST_BASE(508)
#define ST_DEMOUNKNOWN ST_BASE(509)
#define ST_DEMONEVER ST_BASE(510)
#define ST_DEMOAFTERFRAG ST_BASE(511)
#define ST_DEMOAFTERMINUTE ST_BASE(512)
#define ST_PLAYERS ST_BASE(513)
#define ST_DEMOCOMPLETED ST_BASE(514)
#define ST_RECORDGAME ST_BASE(515)
#define ST_GAMENOTRECORDEDAS ST_BASE(516)
#define ST_GAMERECORDINGAS ST_BASE(517)
#define ST_DEMONAME ST_BASE(518)
#define ST_COLORTEAM ST_BASE(519)
#define ST_BOBMINUTES ST_BASE(520)
#define ST_BOBSECONDS ST_BASE(521)
#define ST_AUTOWATCH ST_BASE(522)
#define ST_PLAYERJOINFULL1 ST_BASE(523)
#define ST_PLAYERJOINFULL2 ST_BASE(524)
#define ST_BOBTEAM ST_BASE(525)
#define ST_FRAGSREMAINING ST_BASE(526)
#define ST_GAMETIED ST_BASE(527)
#define ST_1FRAGREMAINING ST_BASE(528)
#define ST_BOBCLEANBOBLINES ST_BASE(529)
#define ST_BOBCLEAN1LINE ST_BASE(530)
#define ST_GAMETYPE3 ST_BASE(531)
#define ST_GAMETYPE3DESC ST_BASE(532)
#define ST_CMDLINE17 ST_BASE(533)
#define ST_CMDLINE18 ST_BASE(534)
#define ST_CMDLINE19 ST_BASE(535)
#define ST_SELECTHANDICAP ST_BASE(536)
#define ST_BEGINNER ST_BASE(537)
#define ST_APPRENTICE ST_BASE(538)
#define ST_INTERMEDIATE ST_BASE(539)
#define ST_MASTER ST_BASE(540)
#define ST_GRANDMASTER ST_BASE(541)
#define ST_DELETEDEMO ST_BASE(542)
#define ST_WINSGAME ST_BASE(543)
#define ST_GETSPOTATO ST_BASE(544)
#define ST_CLEARBOBLINES ST_BASE(545)
#define ST_GAMETYPE4 ST_BASE(546)
#define ST_GAMEEND4 ST_BASE(547)
#define ST_GAMETYPE4DESC ST_BASE(548)
#define ST_GAMEENDSCORE ST_BASE(549)
#define ST_GAMEENDLINES ST_BASE(550)
#define ST_DEMOAFTERSCORE ST_BASE(551)
#define ST_DEMOAFTERLINES ST_BASE(552)
#define ST_FRAG ST_BASE(553)
#define ST_POINT ST_BASE(554)
#define ST_LINE ST_BASE(555)
#define ST_BOBBOBSREMAINING ST_BASE(556)
#define ST_GAMEEND5 ST_BASE(557)
#define ST_CLEANBOBCLEARSBOBLINES ST_BASE(558)
#define ST_CLEANBOBCLEARS1LINE ST_BASE(559)
#define ST_BOBCLEARSBOBLINEBOB ST_BASE(560)
#define ST_DONEPOTATO ST_BASE(561)
#define ST_RESTARTGAME ST_BASE(562)
#define ST_REJOINGAME ST_BASE(563)
#define ST_GOAL ST_BASE(564)
#define ST_YOUGOTPOTATO1 ST_BASE(565)
#define ST_YOUGOTPOTATO2 ST_BASE(566)
#define ST_YOUGOTRIDOFPOTATO1 ST_BASE(567)
#define ST_YOUGOTRIDOFPOTATO2 ST_BASE(568)
#define ST_SLOG ST_BASE(569)
#define ST_WSLOG ST_BASE(570)
#define ST_GAMETYPEDESCRIPTIONS ST_BASE(571)
#define ST_GAMETYPE5 ST_BASE(572)
#define ST_WAITINGFORROUND1 ST_BASE(573)
#define ST_WAITINGFORROUND2 ST_BASE(574)
#define ST_WAITINGFORKEY1 ST_BASE(575)
#define ST_WAITINGFORKEY2 ST_BASE(576)
#define ST_BOBWINSROUND ST_BASE(577)
#define ST_NOBODY ST_BASE(578)
#define ST_GAMENOTLOGGEDAS ST_BASE(579)
#define ST_GAMELOGGINGAS ST_BASE(580)
#define ST_SHOWPPM ST_BASE(581)
#define ST_SHOWBPM ST_BASE(582)
#define ST_PRESS2ROT ST_BASE(583)
#define ST_PRESSDROP ST_BASE(584)
#define ST_GAMETYPE6 ST_BASE(585)
#define ST_SELECTSINGLEGAMETYPE ST_BASE(586)
#define ST_SINGLENORMAL ST_BASE(587)
#define ST_SINGLESPRINT ST_BASE(588)
#define ST_AVGCLEAR ST_BASE(589)
#define ST_AVGCOMBO ST_BASE(590)
#define ST_RANK ST_BASE(591)
#define ST_SPEED ST_BASE(592)
#define ST_COMBO ST_BASE(593)

#endif
