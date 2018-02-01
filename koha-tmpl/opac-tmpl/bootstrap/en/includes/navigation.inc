<div id="opacnav">
[% IF IsPatronPage %][% INCLUDE usermenu.inc %][% END %]
[% OpacNav %]
<span class="menusection">Online Resources</span>
<ul id="journalmenu">
<li><a href="http://search.proquest.com/barcode?accountid=35347&groupid=70209" style="background-image: url(/proquest.png);"/>ProQuest</a></li>
[% IF ( opacuserlogin ) %] [% IF ( loggedinusername ) %]
<li><a id="ebsco" href="http://www.calyx.net.au/media/EBCebsco.html" style="background-image: url(/ebsco.png);">EBSCO</a></li>
[% END %]
[% END %]
[% OpacNavBottom %]
</ul>
[% UNLESS IsPatronPage %][% INCLUDE usermenu.inc %][% END %]
</div>
