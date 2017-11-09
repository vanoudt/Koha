<div id="opacnav">
[% IF IsPatronPage %][% INCLUDE usermenu.inc %][% END %]
[% OpacNav %]
<span class="menusection">Online Resources</span>
<ul id="journalmenu">
<li><a href="http://search.proquest.com/barcode?accountid=35347&groupid=70209" style="background-image: url(/proquest.png);"/>ProQuest</a></li>
[% IF ( opacuserlogin ) %] [% IF ( loggedinusername ) %]
<li><a id="bibliotheca" href="http://search.ebscohost.com/login.aspx?FormSubmit=true&user=atl0855p&password=sacra14dallas" style="background-image: url(/bso.png);">Bibliotheca Sacra</a></li>
<li><a id="ebsco" href="http://www.calyx.net.au/media/EBCebsco.html" style="background-image: url(/ebsco.png);">EBSCO</a></li>
<li>
<form name="sageform" id="sage" method="post" action="http://online.sagepub.com/login">
<input type="hidden" value="http://online.sagepub.com/" name="login-referer"/>
<input type="hidden" value="pbcsage" name="username"/>
<input type="hidden" value="G0d15l0v3" name="code"/>
<input type="hidden" value="no" name="storepwd"/>
</form>
<a id="sglink" onclick="document.getElementById('sage').submit();" style="background-image: url(/sage.ico);">Sage</a></li>
<li>
<form id="pulpit" method="post" action="http://www.pulpit.org/wp-login.php" name="puplitform">
<input type="hidden" name="log" value="dsmith1">
<input type="hidden" name="pwd" value="welcome123">
<input type="hidden" name="redirect_to" value="http://www.pulpit.org/">
</form>
<a id="tlp" onclick="document.getElementById('pulpit').submit();" style="background-image: url(/tlp.png);" >The Living Pulpit</a></li>
[% END %]
[% END %]
<li><a href="http://pbc.wa.edu.au/links"  style="background-image: url(/link.png);">Useful Links</a></li>
<li><a href="http://www.biblia.com" style="background-image: url(https://biblia.com/favicon.ico); background-size: 16px;">Logos Library</a></li>
</ul>
[% UNLESS IsPatronPage %][% INCLUDE usermenu.inc %][% END %]
[% OpacNavBottom %]
</div>
