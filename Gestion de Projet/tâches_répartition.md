{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang1036{\fonttbl{\f0\fswiss\fprq2\fcharset0 Arial;}{\f1\fswiss\fprq2\fcharset0 Arial Unicode MS Western;}{\f2\fnil\fcharset1 Cambria Math;}{\f3\fswiss\fprq2\fcharset128 Arial Unicode MS;}{\f4\fnil\fcharset0 Calibri;}}
{\colortbl ;\red255\green0\blue0;\red0\green255\blue255;\red0\green255\blue0;\red255\green153\blue0;\red255\green20\blue147;\red67\green67\blue67;\red102\green102\blue102;}
{\*\listtable 
{\list\listhybrid
{\listlevel\levelnfc1\leveljc2\levelstartat1{\leveltext\'02\'00.;}{\levelnumbers\'01;}\jclisttab\tx0}
{\listlevel\levelnfc3\leveljc0\levelstartat1{\leveltext\'02\'01.;}{\levelnumbers\'01;}\jclisttab\tx0}
{\listlevel\levelnfc0\leveljc0\levelstartat1{\leveltext\'02\'02.;}{\levelnumbers\'01;}\jclisttab\tx0}\listid1 }}
{\*\listoverridetable{\listoverride\listid1\listoverridecount0\ls1}}
{\stylesheet{ Normal;}{\s1 heading 1;}{\s2 heading 2;}{\s3 heading 3;}{\s4 heading 4;}}
{\*\generator Riched20 10.0.19041}{\*\mmathPr\mmathFont2\mwrapIndent1440 }\viewkind4\uc1 
\pard\keep\keepn\widctlpar\sa60\sl276\slmult1\qc\f0\fs52\lang12 Cahier des charges\par

\pard\widctlpar\sl276\slmult1\qc\fs22\par
\par

\pard\keep\keepn\widctlpar\s1\sb400\sa120\sl276\slmult1\fs40 Robot sauveteur \par

\pard\widctlpar\sl276\slmult1\fs22\par

\pard 
{\listtext\f0 I.\tab}\ls1\widctlpar\fi-360\li720\sl276\slmult1 R\'e9aliser un robot sauveteur \par

\pard 
{\listtext\f0 A.\tab}\ls1\ilvl1\widctlpar\fi-360\li1440\sl276\slmult1 Le robot transmet ce qu\rquote il voit gr\'e2ce \'e0 : \par

\pard 
{\listtext\f0 1.\tab}\ls1\ilvl2\widctlpar\fi-360\li2160\sl276\slmult1 une cam\'e9ra qui voit dans le visible\par
{\listtext\f0 2.\tab}une cam\'e9ra thermique\par

\pard 
{\listtext\f0 B.\tab}\ls1\ilvl1\widctlpar\fi-360\li1440\sl276\slmult1 Le robot a deux modes de d\'e9placements diff\'e9rents\par

\pard 
{\listtext\f0 1.\tab}\ls1\ilvl2\widctlpar\fi-360\li2160\sl276\slmult1 D\'e9tection automatique des personnes et approche de la personne\par
{\listtext\f0 2.\tab}Pilotage manuel \'e0 distance via une manette\par

\pard\widctlpar\li1440\sl276\slmult1\par
\par
\par

\pard\widctlpar\sl276\slmult1\par
R\'e9partition des t\'e2ches : \par
\par
\highlight1 RAPHAEL\par
\highlight2 ALFRED\par
\highlight3 SALLY\par
\highlight4 DANIEL\par
\highlight5 DORIAN\par
\highlight3\par

\pard\keep\keepn\widctlpar\s2\sb360\sa120\sl276\slmult1\highlight0\fs32\page\par
Partie num\'e9rique \par

\pard\keep\keepn\widctlpar\s3\sb320\sa80\sl276\slmult1\cf6\fs28\par

\pard 
{\pntext\f0 I.\tab}{\*\pn\pnlvlbody\pnf0\pnindent0\pnstart1\pnqr\pnucrm{\pntxta.}}
\keep\keepn\widctlpar\s3\fi-360\li720\sb320\sa80\sl276\slmult1 Communication robot - utilisateur \par

\pard\widctlpar\li720\sl276\slmult1\cf0\fs22 //Raspberry-Raspberry\par

\pard\widctlpar\fi720\sl276\slmult1\highlight4 Ex_num_com_0 : Le robot doit communiquer sans fil avec la partie commande (utilisateur). \par

\pard\widctlpar\sl276\slmult1\highlight0\par

\pard\keep\keepn\widctlpar\s3\fi-360\li720\sb320\sa80\sl276\slmult1\cf6\fs28 II.\tab Partie commande\par

\pard\widctlpar\sl276\slmult1\cf0\fs22\tab // Utilisateur-Raspberry\par

\pard\widctlpar\fi720\sl276\slmult1\highlight4 Ex_num_cmd_0 : L\rquote utilisateur doit pouvoir contr\'f4ler les mouvements du robot gr\'e2ce \'e0 une t\'e9l\'e9commande. \par
Commentaire : deux cartes raspberry sont \'e0 disposition pour le projet \par

\pard\widctlpar\li1440\sl276\slmult1\highlight0\par

\pard\widctlpar\sl276\slmult1\tab\highlight4 //Ecran-Raspberry\par

\pard\widctlpar\fi720\sl276\slmult1 Ex_num_cmd_1 : L\rquote\'e9cran doit afficher correctement les images acquises par le robot avec une faible latence.\par
\highlight0\par

\pard\widctlpar\sl276\slmult1\par

\pard\widctlpar\fi720\sl276\slmult1\highlight4 Ex_num_robot_1 :  L\rquote utilisateur doit pouvoir conna\'eetre la position GPS du robot \'e0 tout instant lorsqu\rquote il est \'e0 l\rquote ext\'e9rieur.\par
\highlight0\par

\pard\widctlpar\sl276\slmult1\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par

\pard\keep\keepn\widctlpar\s2\sb360\sa120\sl276\slmult1\fs32 Partie Electronique\par

\pard\widctlpar\sl276\slmult1\fs22\par

\pard\keep\keepn\widctlpar\s4\fi-360\li720\sb280\sa80\sl276\slmult1\cf7 III.\tab\fs24 Partie robot\par

\pard\widctlpar\sl276\slmult1\cf0\fs22\par

\pard\widctlpar\sl276\slmult1\qj\highlight5\tab Ex_elec_robot_0 : Le robot doit int\'e9grer des \'e9clairages sur sa structure afin d\rquote\'e9clairer son champ de vision jusqu\rquote\'e0 de 3-4 m, lorsqu\rquote il se d\'e9place dans des environnements sombres.\par
\f1\tab\f2\u8594?\f1\lang12  analyser le courant maximal en sortie de la STM32 \f0\par
\f3\tab\f2\u8594?\f1\lang12  r\'e9aliser 4 modes d\rquote\'e9clairages diff\'e9rents : (\'e9teint, faible,moyen,fort)\f0\par
\par
\highlight0\par

\pard\widctlpar\fi720\sl276\slmult1\highlight1 Ex_elec_robot_1 : Le robot doit pouvoir se d\'e9placer \'e0 une vitesse minimale de 1 km/h\par
\highlight0\par
\highlight5 Ex_elec_robot_2 : Le robot doit pouvoir se d\'e9placer avec une autonomie d\rquote environ 30 min\par
\highlight0\par
\highlight5 Ex_elec_robot_3 : Le robot doit pouvoir se d\'e9placer dans des environnements accident\'e9s\par

\pard\widctlpar\sl276\slmult1\highlight0\par
\tab\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par
\par

\pard\keep\keepn\widctlpar\s2\sb360\sa120\sl276\slmult1\fs32 Partie Software\par

\pard\keep\keepn\widctlpar\s3\sb320\sa80\sl276\slmult1\cf6\fs28 Commande \par

\pard\widctlpar\sl276\slmult1\cf0\highlight2\fs22\par

\pard\widctlpar\fi720\sl276\slmult1 Ex_soft_cmd_0 : L\rquote\'e9cran doit pouvoir afficher les flux vid\'e9os des modules cam\'e9ras\par
Commentaire : Les deux flux vid\'e9os ne seront pas affich\'e9s en m\'eame temps, un bouton \ldblquote switch\rdblquote  permettra de passer d\rquote une cam\'e9ra \'e0 l\rquote autre. (not a priority)\par
\f2\u8594?\f1\lang12  \f0\par
\highlight0\par
\highlight3 Ex_soft_cmd_1 : La t\'e9l\'e9commande doit int\'e9grer un bouton pour contr\'f4ler l\rquote\'e9clairage\par
\highlight0\par
\highlight2 Ex_soft_cmd_2 :  L\rquote\'e9cran doit afficher la position GPS du robot \'e0 un endroit non g\'eanant dans l\rquote affichage (not a priority)\par
\par
\highlight0\par
\highlight3 Ex_soft_cmd_3 : Les commandes issues de la t\'e9l\'e9commande doivent permettre de piloter le robot\par
\highlight0\par
\highlight2 Ex_soft_cmd_4 : L\rquote utilisateur doit pouvoir communiquer \'e0 distance avec le robot via le module de communication (not a priority)\par

\pard 
{\pntext\f0 1)\tab}{\*\pn\pnlvlbody\pnf0\pnindent0\pnstart1\pndec{\pntxta)}}
\widctlpar\fi-360\li1440\sl276\slmult1  commencer par faire un test de communication entre les deux raspberry\par

\pard\widctlpar\fi720\sl276\slmult1\highlight0\par

\pard\keep\keepn\widctlpar\s3\sb320\sa80\sl276\slmult1\cf6\fs28 Robot\par

\pard\widctlpar\sl276\slmult1\cf0\fs22\par

\pard\widctlpar\fi720\sl276\slmult1\highlight2 Ex_soft_robot_0 : Le robot doit envoyer les images de la cam\'e9ra thermique et de la cam\'e9ra visible dans un flux organis\'e9. On doit pouvoir recevoir 10 fps au minimum de la part de chaque cam\'e9ra. (PRIORITY) \par
Ex_soft_robot_0_a : Le robot doit pouvoir recevoir le flux d\rquote image et le transmettre dans un flux organis\'e9 \'e0 un PC de contr\'f4le \par
\par
\highlight0\par
\highlight1 Ex_soft_robot_1 : Le robot doit envoyer les informations du GPS vers la partie commande toutes les 10 secondes. \par
\highlight0\par
Ex_soft_robot_2 (optionnel) : Le robot doit envoyer les informations venant des moteurs \'e0 la partie commande pour faire de l\rquote odom\'e9trie. \par
\par
\highlight5 Ex_soft_robot_3 (optionnel) : Coder le \ldblquote gouvernail\rdblquote  pour le pilotage de la direction des roues \par
\highlight0\par
\par
\par
\par

\pard\keep\keepn\widctlpar\s2\sb360\sa120\sl276\slmult1\fs32\par

\pard\widctlpar\sl276\slmult1\fs22\par
\par

\pard\keep\keepn\widctlpar\s2\sb360\sa120\sl276\slmult1\fs32 Partie M\'e9canique\par

\pard\widctlpar\sl276\slmult1\fs22\par
\highlight5 Ex_meca_0 : r\'e9alisation du ch\'e2ssis en imprimante 3D\par
\par
Ex_meca_0 : r\'e9alisation des roues \par
\par
Ex_meca_0 : diff\'e9rentiel\par
\par
\par
\par
\par

\pard\sa200\sl276\slmult1\highlight0\f4\par
}
 