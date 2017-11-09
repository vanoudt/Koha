  <span class="menusection">Library Account</span>
    <ul class="menu-collapse">
      [% IF  ( Koha.Preference( 'opacuserlogin' ) == 1) %]
        [% IF loggedinusername %]
            <li><a class="logout" id="logoutmenu" href="/cgi-bin/koha/opac-main.pl?logout.x=1">Log out</a></li>

            [% IF ( userview ) %]
                <li class="active">
            [% ELSE %]
                <li>
            [% END %]
                <a id="summary_link" href="/cgi-bin/koha/opac-user.pl">Account Summary</a></li>
            [% IF ( OPACFinesTab ) %]
                [% IF ( accountview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a href="/cgi-bin/koha/opac-account.pl">Fines</a></li>
            [% END %]

            [% IF ( userupdateview ) %]
                <li class="active">
            [% ELSE %]
                <li>
            [% END %]
                <a id="details_link" href="/cgi-bin/koha/opac-memberentry.pl">Personal Details</a></li>
            [% IF Koha.Preference( 'TagsEnabled' ) == 1 %]
                [% IF ( tagsview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a href="/cgi-bin/koha/opac-tags.pl?mine=1">Your Tags</a></li>
            [% END %]

            [% IF EnableOpacSearchHistory %]
                [% IF ( searchhistoryview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a id="searchhistory_link" href="/cgi-bin/koha/opac-search-history.pl">Search History</a></li>
            [% END %]

            [% IF ( opacreadinghistory ) %]
                [% IF ( readingrecview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a id="readinghistory_link" href="/cgi-bin/koha/opac-readingrecord.pl">Reading History</a></li>
                [% IF ( OPACPrivacy ) %]
                    [% IF ( privacyview ) %]
                        <li class="active">
                    [% ELSE %]
                        <li>
                    [% END %]
                    <a id="privacy_link" href="/cgi-bin/koha/opac-privacy.pl">Privacy Settings</a></li>
                [% END %]
            [% END # / opacreadinghistory %]

            [% IF Koha.Preference( 'suggestion' ) == 1 %]
                [% IF ( suggestionsview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a id="suggestions_link" href="/cgi-bin/koha/opac-suggestions.pl">Purchase Suggestions</a></li>
            [% END %]

            [% IF ( EnhancedMessagingPreferences ) %]
                [% IF Koha.Preference( 'EnhancedMessagingPreferencesOPAC' ) %]
                    [% IF ( messagingview ) %]
                        <li class="active">
                    [% ELSE %]
                        <li>
                    [% END %]
                    <a href="/cgi-bin/koha/opac-messaging.pl">Messaging</a></li>
                 [% END %]
            [% END %]

            [% IF Koha.Preference( 'virtualshelves' ) == 1 %]
                [% IF ( listsview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a id="lists_link" href="/cgi-bin/koha/opac-shelves.pl?op=list&amp;category=1">Your Lists</a></li>
            [% END %]

            [% IF Koha.Preference( 'useDischarge' ) == 1 %]
                [% IF ( dischargeview ) %]
                    <li class="active">
                [% ELSE %]
                    <li>
                [% END %]
                <a href="/cgi-bin/koha/opac-discharge.pl">Ask for a Discharge</a></li>
		        [% END %]
			[% ELSE %]
				<li><a id="login_link" href="/cgi-bin/koha/svc/auth/googleopenidconnect">Log in <span>to access account and more resources</span></a></li>
		    <li><a class="manuallogin" style="text-align:center; font-size:xx-small; color: #aaa;" href="/cgi-bin/koha/opac-user.pl">Manual login</a></form></li>
			[% END %]
		[% END %]
   	</ul>
<span class="menusection">PBC Account</span>
	<ul class="menu-collapse">
		<li><a id="quota_link" href="http://quota.pbcstudents.pbc.wa.edu.au:8999">Internet Quota</a>
	</ul>
