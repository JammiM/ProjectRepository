


<!DOCTYPE html>
<html lang="en" class="">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta http-equiv="Content-Language" content="en">
    
    
    <title>emscripten/hello_world_sdl.cpp at master · kripken/emscripten</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="kripken/emscripten" name="twitter:title" /><meta content="emscripten - Emscripten: An LLVM-to-JavaScript Compiler" name="twitter:description" /><meta content="https://avatars3.githubusercontent.com/u/173661?v=3&amp;s=400" name="twitter:image:src" />
      <meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars3.githubusercontent.com/u/173661?v=3&amp;s=400" property="og:image" /><meta content="kripken/emscripten" property="og:title" /><meta content="https://github.com/kripken/emscripten" property="og:url" /><meta content="emscripten - Emscripten: An LLVM-to-JavaScript Compiler" property="og:description" />
      <meta name="browser-stats-url" content="/_stats">
    <link rel="assets" href="https://assets-cdn.github.com/">
    <link rel="xhr-socket" href="/_sockets">
    <meta name="pjax-timeout" content="1000">
    <link rel="sudo-modal" href="/sessions/sudo_modal">

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="selected-link" value="repo_source" data-pjax-transient>
      <meta name="google-analytics" content="UA-3769691-2">

    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="5118F801:0C1B:17570D2:551A8822" name="octolytics-dimension-request_id" /><meta content="5257234" name="octolytics-actor-id" /><meta content="JammiM" name="octolytics-actor-login" /><meta content="f0a2b9d8a3a6d2e02a3e5c48721f74759f8d5c19397de3c7dbdb48401ce45ab7" name="octolytics-actor-hash" />
    
    <meta content="Rails, view, blob#show" name="analytics-event" />
    <meta class="js-ga-set" name="dimension1" content="Logged In">
    <meta class="js-ga-set" name="dimension2" content="Header v3">

    
    <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">


    <meta content="authenticity_token" name="csrf-param" />
<meta content="siBEvNKLWCt/lDH7HF7hVVw/SFcG1uCAGya77k6kkxHuPJArmygBf7y2OaNSxbv+jouHPR9OP0gBhYVSgf21mg==" name="csrf-token" />

    <link href="https://assets-cdn.github.com/assets/github-391b32dc1132ef0837cee6b206cad9c2726c7f495e5047901a7afa551e81d695.css" media="all" rel="stylesheet" />
    <link href="https://assets-cdn.github.com/assets/github2-14b629a12b237ffde72fb70f31de6a515754f0f686189a072cc00e54ee202fd1.css" media="all" rel="stylesheet" />
    
    


    <meta http-equiv="x-pjax-version" content="0cdf73d6f5d84ba34af332a36c975c0a">

      
  <meta name="description" content="emscripten - Emscripten: An LLVM-to-JavaScript Compiler">
  <meta name="go-import" content="github.com/kripken/emscripten git https://github.com/kripken/emscripten.git">

  <meta content="173661" name="octolytics-dimension-user_id" /><meta content="kripken" name="octolytics-dimension-user_login" /><meta content="1357796" name="octolytics-dimension-repository_id" /><meta content="kripken/emscripten" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="1357796" name="octolytics-dimension-repository_network_root_id" /><meta content="kripken/emscripten" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/kripken/emscripten/commits/master.atom" rel="alternate" title="Recent Commits to emscripten:master" type="application/atom+xml">

  </head>


  <body class="logged_in  env-production windows vis-public page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      


        <div class="header header-logged-in true" role="banner">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/" data-hotkey="g d" aria-label="Homepage" data-ga-click="Header, go to dashboard, icon:logo">
  <span class="mega-octicon octicon-mark-github"></span>
</a>


      <div class="site-search repo-scope js-site-search" role="search">
          <form accept-charset="UTF-8" action="/kripken/emscripten/search" class="js-site-search-form" data-global-search-url="/search" data-repo-search-url="/kripken/emscripten/search" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
  <input type="text"
    class="js-site-search-field is-clearable"
    data-hotkey="s"
    name="q"
    placeholder="Search"
    data-global-scope-placeholder="Search GitHub"
    data-repo-scope-placeholder="Search"
    tabindex="1"
    autocapitalize="off">
  <div class="scope-badge">This repository</div>
</form>
      </div>

      <ul class="header-nav left" role="navigation">
          <li class="header-nav-item explore">
            <a class="header-nav-link" href="/explore" data-ga-click="Header, go to explore, text:explore">Explore</a>
          </li>
            <li class="header-nav-item">
              <a class="header-nav-link" href="https://gist.github.com" data-ga-click="Header, go to gist, text:gist">Gist</a>
            </li>
            <li class="header-nav-item">
              <a class="header-nav-link" href="/blog" data-ga-click="Header, go to blog, text:blog">Blog</a>
            </li>
          <li class="header-nav-item">
            <a class="header-nav-link" href="https://help.github.com" data-ga-click="Header, go to help, text:help">Help</a>
          </li>
      </ul>

      
<ul class="header-nav user-nav right" id="user-links">
  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link name" href="/JammiM" data-ga-click="Header, go to profile, text:username">
      <img alt="@JammiM" class="avatar" data-user="5257234" height="20" src="https://avatars1.githubusercontent.com/u/5257234?v=3&amp;s=40" width="20" />
      <span class="css-truncate">
        <span class="css-truncate-target">JammiM</span>
      </span>
    </a>
  </li>

  <li class="header-nav-item dropdown js-menu-container">
    <a class="header-nav-link js-menu-target tooltipped tooltipped-s" href="#" aria-label="Create new..." data-ga-click="Header, create new, icon:add">
      <span class="octicon octicon-plus"></span>
      <span class="dropdown-caret"></span>
    </a>

    <div class="dropdown-menu-content js-menu-content">
      <ul class="dropdown-menu">
        
<li>
  <a href="/new" data-ga-click="Header, create new repository, icon:repo"><span class="octicon octicon-repo"></span> New repository</a>
</li>
<li>
  <a href="/organizations/new" data-ga-click="Header, create new organization, icon:organization"><span class="octicon octicon-organization"></span> New organization</a>
</li>


  <li class="dropdown-divider"></li>
  <li class="dropdown-header">
    <span title="kripken/emscripten">This repository</span>
  </li>
    <li>
      <a href="/kripken/emscripten/issues/new" data-ga-click="Header, create new issue, icon:issue"><span class="octicon octicon-issue-opened"></span> New issue</a>
    </li>

      </ul>
    </div>
  </li>

  <li class="header-nav-item">
        <a href="/notifications" aria-label="You have unread notifications" class="header-nav-link notification-indicator tooltipped tooltipped-s" data-ga-click="Header, go to notifications, icon:unread" data-hotkey="g n">
        <span class="mail-status unread"></span>
        <span class="octicon octicon-inbox"></span>
</a>
  </li>

  <li class="header-nav-item">
    <a class="header-nav-link tooltipped tooltipped-s" href="/settings/profile" id="account_settings" aria-label="Settings" data-ga-click="Header, go to settings, icon:settings">
      <span class="octicon octicon-gear"></span>
    </a>
  </li>

  <li class="header-nav-item">
    <form accept-charset="UTF-8" action="/logout" class="logout-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="/WCUmviqAFGl/0mz50+svnRIFtEi56JZkgyOv/mD0yEJliHkjKCo6Dh/qPY1I+QTQ/ZDUTZ58Ra8webNRWT4Pg==" /></div>
      <button class="header-nav-link sign-out-button tooltipped tooltipped-s" aria-label="Sign out" data-ga-click="Header, sign out, icon:logout">
        <span class="octicon octicon-sign-out"></span>
      </button>
</form>  </li>

</ul>



    
  </div>
</div>

        

        


      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    <div id="js-flash-container">
      
    </div>
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        
<ul class="pagehead-actions">

  <li>
      <form accept-charset="UTF-8" action="/notifications/subscribe" class="js-social-container" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="amEZJ1ilwhIntRSBLon/tnhCjVwLvnCczVQXBomCI5HAHyegUCTp+67oYhlChOI8THxfsmHn9pqKgpGtQVPQnA==" /></div>    <input id="repository_id" name="repository_id" type="hidden" value="1357796" />

      <div class="select-menu js-menu-container js-select-menu">
        <a href="/kripken/emscripten/subscription"
          class="btn btn-sm btn-with-count select-menu-button js-menu-target" role="button" tabindex="0" aria-haspopup="true"
          data-ga-click="Repository, click Watch settings, action:blob#show">
          <span class="js-select-button">
            <span class="octicon octicon-eye"></span>
            Watch
          </span>
        </a>
        <a class="social-count js-social-count" href="/kripken/emscripten/watchers">
          452
        </a>

        <div class="select-menu-modal-holder">
          <div class="select-menu-modal subscription-menu-modal js-menu-content" aria-hidden="true">
            <div class="select-menu-header">
              <span class="select-menu-title">Notifications</span>
              <span class="octicon octicon-x js-menu-close" role="button" aria-label="Close"></span>
            </div>

            <div class="select-menu-list js-navigation-container" role="menu">

              <div class="select-menu-item js-navigation-item selected" role="menuitem" tabindex="0">
                <span class="select-menu-item-icon octicon octicon-check"></span>
                <div class="select-menu-item-text">
                  <input checked="checked" id="do_included" name="do" type="radio" value="included" />
                  <span class="select-menu-item-heading">Not watching</span>
                  <span class="description">Be notified when participating or @mentioned.</span>
                  <span class="js-select-button-text hidden-select-button-text">
                    <span class="octicon octicon-eye"></span>
                    Watch
                  </span>
                </div>
              </div>

              <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                <span class="select-menu-item-icon octicon octicon octicon-check"></span>
                <div class="select-menu-item-text">
                  <input id="do_subscribed" name="do" type="radio" value="subscribed" />
                  <span class="select-menu-item-heading">Watching</span>
                  <span class="description">Be notified of all conversations.</span>
                  <span class="js-select-button-text hidden-select-button-text">
                    <span class="octicon octicon-eye"></span>
                    Unwatch
                  </span>
                </div>
              </div>

              <div class="select-menu-item js-navigation-item " role="menuitem" tabindex="0">
                <span class="select-menu-item-icon octicon octicon-check"></span>
                <div class="select-menu-item-text">
                  <input id="do_ignore" name="do" type="radio" value="ignore" />
                  <span class="select-menu-item-heading">Ignoring</span>
                  <span class="description">Never be notified.</span>
                  <span class="js-select-button-text hidden-select-button-text">
                    <span class="octicon octicon-mute"></span>
                    Stop ignoring
                  </span>
                </div>
              </div>

            </div>

          </div>
        </div>
      </div>
</form>
  </li>

  <li>
    
  <div class="js-toggler-container js-social-container starring-container ">

    <form accept-charset="UTF-8" action="/kripken/emscripten/unstar" class="js-toggler-form starred js-unstar-button" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="wfWNo6sevT47BbyEebSGOA250JRbK6yt0/l9Jj+YDDB5Q7objGXPFRgOB2mMjEnOKN5Zjl3hwXYcIN/s5vn3dg==" /></div>
      <button
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Unstar this repository" title="Unstar kripken/emscripten"
        data-ga-click="Repository, click unstar button, action:blob#show; text:Unstar">
        <span class="octicon octicon-star"></span>
        Unstar
      </button>
        <a class="social-count js-social-count" href="/kripken/emscripten/stargazers">
          8,083
        </a>
</form>
    <form accept-charset="UTF-8" action="/kripken/emscripten/star" class="js-toggler-form unstarred js-star-button" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="egnTY/7FJ1byVvQXullMcsOuHZYbGzWcdrfh+2iUIMUT4rRsWuL5f9vx5syT/36SwihijI3N+M4DcFyFAOVTvw==" /></div>
      <button
        class="btn btn-sm btn-with-count js-toggler-target"
        aria-label="Star this repository" title="Star kripken/emscripten"
        data-ga-click="Repository, click star button, action:blob#show; text:Star">
        <span class="octicon octicon-star"></span>
        Star
      </button>
        <a class="social-count js-social-count" href="/kripken/emscripten/stargazers">
          8,083
        </a>
</form>  </div>

  </li>

        <li>
          <form accept-charset="UTF-8" action="/kripken/emscripten/fork" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="RZDCkCAc19eMNcCtFjLFqwWIKcNcCD4SbaEFWzD3QR02k7+2JVGffhruOcjuNdGbX9ihiiuX7PWSP/HMRQIaWw==" /></div>
            <button
                type="submit"
                class="btn btn-sm btn-with-count"
                data-ga-click="Repository, show fork modal, action:blob#show; text:Fork"
                title="Fork your own copy of kripken/emscripten to your account"
                aria-label="Fork your own copy of kripken/emscripten to your account">
              <span class="octicon octicon-repo-forked"></span>
              Fork
            </button>
            <a href="/kripken/emscripten/network" class="social-count">918</a>
</form>        </li>

</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="mega-octicon octicon-repo"></span>
          <span class="author"><a href="/kripken" class="url fn" itemprop="url" rel="author"><span itemprop="title">kripken</span></a></span><!--
       --><span class="path-divider">/</span><!--
       --><strong><a href="/kripken/emscripten" class="js-current-repository" data-pjax="#js-repo-pjax-container">emscripten</a></strong>

          <span class="page-context-loader">
            <img alt="" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
          </span>

        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            
<nav class="sunken-menu repo-nav js-repo-nav js-sidenav-container-pjax js-octicon-loaders"
     role="navigation"
     data-pjax="#js-repo-pjax-container"
     data-issue-count-url="/kripken/emscripten/issues/counts">
  <ul class="sunken-menu-group">
    <li class="tooltipped tooltipped-w" aria-label="Code">
      <a href="/kripken/emscripten" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-hotkey="g c" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /kripken/emscripten">
        <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>

      <li class="tooltipped tooltipped-w" aria-label="Issues">
        <a href="/kripken/emscripten/issues" aria-label="Issues" class="js-selected-navigation-item sunken-menu-item" data-hotkey="g i" data-selected-links="repo_issues repo_labels repo_milestones /kripken/emscripten/issues">
          <span class="octicon octicon-issue-opened"></span> <span class="full-word">Issues</span>
          <span class="js-issue-replace-counter"></span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>      </li>

    <li class="tooltipped tooltipped-w" aria-label="Pull requests">
      <a href="/kripken/emscripten/pulls" aria-label="Pull requests" class="js-selected-navigation-item sunken-menu-item" data-hotkey="g p" data-selected-links="repo_pulls /kripken/emscripten/pulls">
          <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull requests</span>
          <span class="js-pull-replace-counter"></span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>

      <li class="tooltipped tooltipped-w" aria-label="Wiki">
        <a href="/kripken/emscripten/wiki" aria-label="Wiki" class="js-selected-navigation-item sunken-menu-item" data-hotkey="g w" data-selected-links="repo_wiki /kripken/emscripten/wiki">
          <span class="octicon octicon-book"></span> <span class="full-word">Wiki</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>      </li>
  </ul>
  <div class="sunken-menu-separator"></div>
  <ul class="sunken-menu-group">

    <li class="tooltipped tooltipped-w" aria-label="Pulse">
      <a href="/kripken/emscripten/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-selected-links="pulse /kripken/emscripten/pulse">
        <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>

    <li class="tooltipped tooltipped-w" aria-label="Graphs">
      <a href="/kripken/emscripten/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-selected-links="repo_graphs repo_contributors /kripken/emscripten/graphs">
        <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
        <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/assets/spinners/octocat-spinner-32-e513294efa576953719e4e2de888dd9cf929b7d62ed8d05f25e731d02452ab6c.gif" width="16" />
</a>    </li>
  </ul>


</nav>

              <div class="only-with-full-nav">
                  
<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><span class="text-emphasized">HTTPS</span> clone URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="https://github.com/kripken/emscripten.git" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  
<div class="clone-url "
  data-protocol-type="ssh"
  data-url="/users/set_protocol?protocol_selector=ssh&amp;protocol_type=clone">
  <h3><span class="text-emphasized">SSH</span> clone URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="git@github.com:kripken/emscripten.git" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  
<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><span class="text-emphasized">Subversion</span> checkout URL</h3>
  <div class="input-group js-zeroclipboard-container">
    <input type="text" class="input-mini input-monospace js-url-field js-zeroclipboard-target"
           value="https://github.com/kripken/emscripten" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>



<p class="clone-options">You can clone with
  <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>, <a href="#" class="js-clone-selector" data-protocol="ssh">SSH</a>, or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <a href="https://help.github.com/articles/which-remote-url-should-i-use" class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <span class="octicon octicon-question"></span>
  </a>
</p>


  <a href="github-windows://openRepo/https://github.com/kripken/emscripten" class="btn btn-sm sidebar-button" title="Save kripken/emscripten to your computer and use it in GitHub Desktop." aria-label="Save kripken/emscripten to your computer and use it in GitHub Desktop.">
    <span class="octicon octicon-device-desktop"></span>
    Clone in Desktop
  </a>

                <a href="/kripken/emscripten/archive/master.zip"
                   class="btn btn-sm sidebar-button"
                   aria-label="Download the contents of kripken/emscripten as a zip file"
                   title="Download the contents of kripken/emscripten as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          

<a href="/kripken/emscripten/blob/ba813471568f05c97c59099a963bc35341d4dfb5/tests/hello_world_sdl.cpp" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:51d5259d9f75f3c9b4a8040ab4db6f77 -->

<div class="file-navigation js-zeroclipboard-container">
  
<div class="select-menu js-menu-container js-select-menu left">
  <span class="btn btn-sm select-menu-button js-menu-target css-truncate" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    title="master"
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button css-truncate-target">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-x js-menu-close" role="button" aria-label="Close"></span>
      </div>

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" data-filter-placeholder="Filter branches/tags" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" data-filter-placeholder="Find a tag…" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/923_var_collisions/tests/hello_world_sdl.cpp"
               data-name="923_var_collisions"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="923_var_collisions">
                923_var_collisions
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/asm_dlopen/tests/hello_world_sdl.cpp"
               data-name="asm_dlopen"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="asm_dlopen">
                asm_dlopen
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/asm_dlopen2/tests/hello_world_sdl.cpp"
               data-name="asm_dlopen2"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="asm_dlopen2">
                asm_dlopen2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/asmify/tests/hello_world_sdl.cpp"
               data-name="asmify"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="asmify">
                asmify
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/async-emterp/tests/hello_world_sdl.cpp"
               data-name="async-emterp"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="async-emterp">
                async-emterp
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/c_backend/tests/hello_world_sdl.cpp"
               data-name="c_backend"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="c_backend">
                c_backend
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/c_backend_unions/tests/hello_world_sdl.cpp"
               data-name="c_backend_unions"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="c_backend_unions">
                c_backend_unions
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/cacheallrecursivetokens/tests/hello_world_sdl.cpp"
               data-name="cacheallrecursivetokens"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="cacheallrecursivetokens">
                cacheallrecursivetokens
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/comp_opts/tests/hello_world_sdl.cpp"
               data-name="comp_opts"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="comp_opts">
                comp_opts
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/conditionalize/tests/hello_world_sdl.cpp"
               data-name="conditionalize"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="conditionalize">
                conditionalize
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/cpp_optimizer/tests/hello_world_sdl.cpp"
               data-name="cpp_optimizer"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="cpp_optimizer">
                cpp_optimizer
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/deframeworkify/tests/hello_world_sdl.cpp"
               data-name="deframeworkify"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="deframeworkify">
                deframeworkify
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/eliminate2/tests/hello_world_sdl.cpp"
               data-name="eliminate2"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="eliminate2">
                eliminate2
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/em-audio/tests/hello_world_sdl.cpp"
               data-name="em-audio"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="em-audio">
                em-audio
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/em-audio-sdl/tests/hello_world_sdl.cpp"
               data-name="em-audio-sdl"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="em-audio-sdl">
                em-audio-sdl
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/emcc-direct/tests/hello_world_sdl.cpp"
               data-name="emcc-direct"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="emcc-direct">
                emcc-direct
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/emterpreter/tests/hello_world_sdl.cpp"
               data-name="emterpreter"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="emterpreter">
                emterpreter
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/emterpreter-f32/tests/hello_world_sdl.cpp"
               data-name="emterpreter-f32"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="emterpreter-f32">
                emterpreter-f32
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/f32/tests/hello_world_sdl.cpp"
               data-name="f32"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="f32">
                f32
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/fast-fs/tests/hello_world_sdl.cpp"
               data-name="fast-fs"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="fast-fs">
                fast-fs
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/fastcomp-by-default/tests/hello_world_sdl.cpp"
               data-name="fastcomp-by-default"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="fastcomp-by-default">
                fastcomp-by-default
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/fastpaths/tests/hello_world_sdl.cpp"
               data-name="fastpaths"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="fastpaths">
                fastpaths
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/gl_relocation/tests/hello_world_sdl.cpp"
               data-name="gl_relocation"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="gl_relocation">
                gl_relocation
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/glGet-cleanup/tests/hello_world_sdl.cpp"
               data-name="glGet-cleanup"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="glGet-cleanup">
                glGet-cleanup
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/globals-chunking/tests/hello_world_sdl.cpp"
               data-name="globals-chunking"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="globals-chunking">
                globals-chunking
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/i32-mem-init/tests/hello_world_sdl.cpp"
               data-name="i32-mem-init"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="i32-mem-init">
                i32-mem-init
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/incoming/tests/hello_world_sdl.cpp"
               data-name="incoming"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="incoming">
                incoming
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/land-3.5/tests/hello_world_sdl.cpp"
               data-name="land-3.5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="land-3.5">
                land-3.5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/land-1624/tests/hello_world_sdl.cpp"
               data-name="land-1624"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="land-1624">
                land-1624
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/land-waywardmonkeys-new-libc-headers/tests/hello_world_sdl.cpp"
               data-name="land-waywardmonkeys-new-libc-headers"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="land-waywardmonkeys-new-libc-headers">
                land-waywardmonkeys-new-libc-headers
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/lazy_token_item/tests/hello_world_sdl.cpp"
               data-name="lazy_token_item"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="lazy_token_item">
                lazy_token_item
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/llvm-3.3/tests/hello_world_sdl.cpp"
               data-name="llvm-3.3"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="llvm-3.3">
                llvm-3.3
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/llvm-3.4/tests/hello_world_sdl.cpp"
               data-name="llvm-3.4"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="llvm-3.4">
                llvm-3.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/llvm-js/tests/hello_world_sdl.cpp"
               data-name="llvm-js"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="llvm-js">
                llvm-js
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/llvmsvn/tests/hello_world_sdl.cpp"
               data-name="llvmsvn"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="llvmsvn">
                llvmsvn
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/low_globals/tests/hello_world_sdl.cpp"
               data-name="low_globals"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="low_globals">
                low_globals
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open selected"
               href="/kripken/emscripten/blob/master/tests/hello_world_sdl.cpp"
               data-name="master"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="master">
                master
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/memimit/tests/hello_world_sdl.cpp"
               data-name="memimit"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="memimit">
                memimit
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/memory-sharing/tests/hello_world_sdl.cpp"
               data-name="memory-sharing"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="memory-sharing">
                memory-sharing
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/merge-3.4/tests/hello_world_sdl.cpp"
               data-name="merge-3.4"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="merge-3.4">
                merge-3.4
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/merge-3.5/tests/hello_world_sdl.cpp"
               data-name="merge-3.5"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="merge-3.5">
                merge-3.5
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/merge-mar-13-2015/tests/hello_world_sdl.cpp"
               data-name="merge-mar-13-2015"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="merge-mar-13-2015">
                merge-mar-13-2015
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/native-optimizer-by-default/tests/hello_world_sdl.cpp"
               data-name="native-optimizer-by-default"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="native-optimizer-by-default">
                native-optimizer-by-default
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/newtriple/tests/hello_world_sdl.cpp"
               data-name="newtriple"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="newtriple">
                newtriple
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/no-fs/tests/hello_world_sdl.cpp"
               data-name="no-fs"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="no-fs">
                no-fs
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/old_shared_libs/tests/hello_world_sdl.cpp"
               data-name="old_shared_libs"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="old_shared_libs">
                old_shared_libs
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/optimize_mem_init/tests/hello_world_sdl.cpp"
               data-name="optimize_mem_init"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="optimize_mem_init">
                optimize_mem_init
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/optimize_normally/tests/hello_world_sdl.cpp"
               data-name="optimize_normally"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="optimize_normally">
                optimize_normally
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/proxy/tests/hello_world_sdl.cpp"
               data-name="proxy"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="proxy">
                proxy
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/proxyGL/tests/hello_world_sdl.cpp"
               data-name="proxyGL"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="proxyGL">
                proxyGL
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/proxyTransfer/tests/hello_world_sdl.cpp"
               data-name="proxyTransfer"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="proxyTransfer">
                proxyTransfer
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/relooper_opt_levels/tests/hello_world_sdl.cpp"
               data-name="relooper_opt_levels"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="relooper_opt_levels">
                relooper_opt_levels
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/relooper-switches/tests/hello_world_sdl.cpp"
               data-name="relooper-switches"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="relooper-switches">
                relooper-switches
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/relooper-switches-land/tests/hello_world_sdl.cpp"
               data-name="relooper-switches-land"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="relooper-switches-land">
                relooper-switches-land
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/sdl_2d_gl/tests/hello_world_sdl.cpp"
               data-name="sdl_2d_gl"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="sdl_2d_gl">
                sdl_2d_gl
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/simd/tests/hello_world_sdl.cpp"
               data-name="simd"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="simd">
                simd
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/simplify-traverse/tests/hello_world_sdl.cpp"
               data-name="simplify-traverse"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="simplify-traverse">
                simplify-traverse
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/simplifyIfs/tests/hello_world_sdl.cpp"
               data-name="simplifyIfs"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="simplifyIfs">
                simplifyIfs
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/static_link/tests/hello_world_sdl.cpp"
               data-name="static_link"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="static_link">
                static_link
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/target_triple/tests/hello_world_sdl.cpp"
               data-name="target_triple"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="target_triple">
                target_triple
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/temp/tests/hello_world_sdl.cpp"
               data-name="temp"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="temp">
                temp
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/tokencache/tests/hello_world_sdl.cpp"
               data-name="tokencache"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="tokencache">
                tokencache
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/vvuk-regal/tests/hello_world_sdl.cpp"
               data-name="vvuk-regal"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="vvuk-regal">
                vvuk-regal
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/webidl/tests/hello_world_sdl.cpp"
               data-name="webidl"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="webidl">
                webidl
              </span>
            </a>
            <a class="select-menu-item js-navigation-item js-navigation-open "
               href="/kripken/emscripten/blob/wip-wchar/tests/hello_world_sdl.cpp"
               data-name="wip-wchar"
               data-skip-pjax="true"
               rel="nofollow">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <span class="select-menu-item-text css-truncate-target" title="wip-wchar">
                wip-wchar
              </span>
            </a>
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div>

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/webidl.1/tests/hello_world_sdl.cpp"
                 data-name="webidl.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="webidl.1">webidl.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/success/tests/hello_world_sdl.cpp"
                 data-name="success"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="success">success</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/pre-llvm-opts/tests/hello_world_sdl.cpp"
                 data-name="pre-llvm-opts"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="pre-llvm-opts">pre-llvm-opts</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/llvm-svn-pre-3.0/tests/hello_world_sdl.cpp"
                 data-name="llvm-svn-pre-3.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="llvm-svn-pre-3.0">llvm-svn-pre-3.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/llvm-svn-backup/tests/hello_world_sdl.cpp"
                 data-name="llvm-svn-backup"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="llvm-svn-backup">llvm-svn-backup</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/llvm-opts/tests/hello_world_sdl.cpp"
                 data-name="llvm-opts"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="llvm-opts">llvm-opts</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/i64/tests/hello_world_sdl.cpp"
                 data-name="i64"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="i64">i64</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/full_es2/tests/hello_world_sdl.cpp"
                 data-name="full_es2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="full_es2">full_es2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/failure/tests/hello_world_sdl.cpp"
                 data-name="failure"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="failure">failure</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/fails/tests/hello_world_sdl.cpp"
                 data-name="fails"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="fails">fails</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/fail/tests/hello_world_sdl.cpp"
                 data-name="fail"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="fail">fail</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/asm_js_minifier/tests/hello_world_sdl.cpp"
                 data-name="asm_js_minifier"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="asm_js_minifier">asm_js_minifier</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/asm_js/tests/hello_world_sdl.cpp"
                 data-name="asm_js"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="asm_js">asm_js</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.30.0/tests/hello_world_sdl.cpp"
                 data-name="1.30.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.30.0">1.30.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.29.12/tests/hello_world_sdl.cpp"
                 data-name="1.29.12"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.29.12">1.29.12</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.29.11/tests/hello_world_sdl.cpp"
                 data-name="1.29.11"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.29.11">1.29.11</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.29.10/tests/hello_world_sdl.cpp"
                 data-name="1.29.10"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.29.10">1.29.10</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.29.9/tests/hello_world_sdl.cpp"
                 data-name="1.29.9"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.29.9">1.29.9</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.29.8/tests/hello_world_sdl.cpp"
                 data-name="1.29.8"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.29.8">1.29.8</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.29.7/tests/hello_world_sdl.cpp"
                 data-name="1.29.7"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.29.7">1.29.7</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.29.6/tests/hello_world_sdl.cpp"
                 data-name="1.29.6"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.29.6">1.29.6</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.29.5/tests/hello_world_sdl.cpp"
                 data-name="1.29.5"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.29.5">1.29.5</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.29.4/tests/hello_world_sdl.cpp"
                 data-name="1.29.4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.29.4">1.29.4</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.29.3/tests/hello_world_sdl.cpp"
                 data-name="1.29.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.29.3">1.29.3</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.29.2/tests/hello_world_sdl.cpp"
                 data-name="1.29.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.29.2">1.29.2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.29.1/tests/hello_world_sdl.cpp"
                 data-name="1.29.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.29.1">1.29.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.29.0/tests/hello_world_sdl.cpp"
                 data-name="1.29.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.29.0">1.29.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.28.3/tests/hello_world_sdl.cpp"
                 data-name="1.28.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.28.3">1.28.3</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.28.2/tests/hello_world_sdl.cpp"
                 data-name="1.28.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.28.2">1.28.2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.28.1/tests/hello_world_sdl.cpp"
                 data-name="1.28.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.28.1">1.28.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.28.0/tests/hello_world_sdl.cpp"
                 data-name="1.28.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.28.0">1.28.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.27.2/tests/hello_world_sdl.cpp"
                 data-name="1.27.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.27.2">1.27.2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.27.1/tests/hello_world_sdl.cpp"
                 data-name="1.27.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.27.1">1.27.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.27.0/tests/hello_world_sdl.cpp"
                 data-name="1.27.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.27.0">1.27.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.26.1/tests/hello_world_sdl.cpp"
                 data-name="1.26.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.26.1">1.26.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.26.0/tests/hello_world_sdl.cpp"
                 data-name="1.26.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.26.0">1.26.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.25.2/tests/hello_world_sdl.cpp"
                 data-name="1.25.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.25.2">1.25.2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.25.1/tests/hello_world_sdl.cpp"
                 data-name="1.25.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.25.1">1.25.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.25.0/tests/hello_world_sdl.cpp"
                 data-name="1.25.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.25.0">1.25.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.24.1/tests/hello_world_sdl.cpp"
                 data-name="1.24.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.24.1">1.24.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.24.0/tests/hello_world_sdl.cpp"
                 data-name="1.24.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.24.0">1.24.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.23.5/tests/hello_world_sdl.cpp"
                 data-name="1.23.5"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.23.5">1.23.5</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.23.4/tests/hello_world_sdl.cpp"
                 data-name="1.23.4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.23.4">1.23.4</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.23.3/tests/hello_world_sdl.cpp"
                 data-name="1.23.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.23.3">1.23.3</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.23.2/tests/hello_world_sdl.cpp"
                 data-name="1.23.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.23.2">1.23.2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.23.1/tests/hello_world_sdl.cpp"
                 data-name="1.23.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.23.1">1.23.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.23.0/tests/hello_world_sdl.cpp"
                 data-name="1.23.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.23.0">1.23.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.22.2/tests/hello_world_sdl.cpp"
                 data-name="1.22.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.22.2">1.22.2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.22.1/tests/hello_world_sdl.cpp"
                 data-name="1.22.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.22.1">1.22.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.22.0/tests/hello_world_sdl.cpp"
                 data-name="1.22.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.22.0">1.22.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.21.10/tests/hello_world_sdl.cpp"
                 data-name="1.21.10"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.21.10">1.21.10</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.21.9/tests/hello_world_sdl.cpp"
                 data-name="1.21.9"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.21.9">1.21.9</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.21.8/tests/hello_world_sdl.cpp"
                 data-name="1.21.8"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.21.8">1.21.8</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.21.7/tests/hello_world_sdl.cpp"
                 data-name="1.21.7"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.21.7">1.21.7</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.21.6/tests/hello_world_sdl.cpp"
                 data-name="1.21.6"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.21.6">1.21.6</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.21.5/tests/hello_world_sdl.cpp"
                 data-name="1.21.5"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.21.5">1.21.5</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.21.4/tests/hello_world_sdl.cpp"
                 data-name="1.21.4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.21.4">1.21.4</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.21.3/tests/hello_world_sdl.cpp"
                 data-name="1.21.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.21.3">1.21.3</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.21.2/tests/hello_world_sdl.cpp"
                 data-name="1.21.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.21.2">1.21.2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.21.1/tests/hello_world_sdl.cpp"
                 data-name="1.21.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.21.1">1.21.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.21.0/tests/hello_world_sdl.cpp"
                 data-name="1.21.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.21.0">1.21.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.20.0/tests/hello_world_sdl.cpp"
                 data-name="1.20.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.20.0">1.20.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.19.2/tests/hello_world_sdl.cpp"
                 data-name="1.19.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.19.2">1.19.2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.19.1/tests/hello_world_sdl.cpp"
                 data-name="1.19.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.19.1">1.19.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.19.0/tests/hello_world_sdl.cpp"
                 data-name="1.19.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.19.0">1.19.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.18.4/tests/hello_world_sdl.cpp"
                 data-name="1.18.4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.18.4">1.18.4</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.18.3/tests/hello_world_sdl.cpp"
                 data-name="1.18.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.18.3">1.18.3</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.18.2/tests/hello_world_sdl.cpp"
                 data-name="1.18.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.18.2">1.18.2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.18.1/tests/hello_world_sdl.cpp"
                 data-name="1.18.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.18.1">1.18.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.18.0/tests/hello_world_sdl.cpp"
                 data-name="1.18.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.18.0">1.18.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.17.0/tests/hello_world_sdl.cpp"
                 data-name="1.17.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.17.0">1.17.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.16.0/tests/hello_world_sdl.cpp"
                 data-name="1.16.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.16.0">1.16.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.15.1/tests/hello_world_sdl.cpp"
                 data-name="1.15.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.15.1">1.15.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.15.0/tests/hello_world_sdl.cpp"
                 data-name="1.15.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.15.0">1.15.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.14.1/tests/hello_world_sdl.cpp"
                 data-name="1.14.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.14.1">1.14.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.14.0/tests/hello_world_sdl.cpp"
                 data-name="1.14.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.14.0">1.14.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.13.2/tests/hello_world_sdl.cpp"
                 data-name="1.13.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.13.2">1.13.2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.13.1/tests/hello_world_sdl.cpp"
                 data-name="1.13.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.13.1">1.13.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.13.0/tests/hello_world_sdl.cpp"
                 data-name="1.13.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.13.0">1.13.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.12.3/tests/hello_world_sdl.cpp"
                 data-name="1.12.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.12.3">1.12.3</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.12.2/tests/hello_world_sdl.cpp"
                 data-name="1.12.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.12.2">1.12.2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.12.1/tests/hello_world_sdl.cpp"
                 data-name="1.12.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.12.1">1.12.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.12.0/tests/hello_world_sdl.cpp"
                 data-name="1.12.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.12.0">1.12.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.11.1/tests/hello_world_sdl.cpp"
                 data-name="1.11.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.11.1">1.11.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.11.0/tests/hello_world_sdl.cpp"
                 data-name="1.11.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.11.0">1.11.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.10.4/tests/hello_world_sdl.cpp"
                 data-name="1.10.4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.10.4">1.10.4</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.10.3/tests/hello_world_sdl.cpp"
                 data-name="1.10.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.10.3">1.10.3</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.10.2/tests/hello_world_sdl.cpp"
                 data-name="1.10.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.10.2">1.10.2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.10.1/tests/hello_world_sdl.cpp"
                 data-name="1.10.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.10.1">1.10.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.10.0/tests/hello_world_sdl.cpp"
                 data-name="1.10.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.10.0">1.10.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.9.5/tests/hello_world_sdl.cpp"
                 data-name="1.9.5"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.9.5">1.9.5</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.9.4/tests/hello_world_sdl.cpp"
                 data-name="1.9.4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.9.4">1.9.4</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.9.3/tests/hello_world_sdl.cpp"
                 data-name="1.9.3"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.9.3">1.9.3</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.9.2/tests/hello_world_sdl.cpp"
                 data-name="1.9.2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.9.2">1.9.2</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.9.1/tests/hello_world_sdl.cpp"
                 data-name="1.9.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.9.1">1.9.1</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.9.0/tests/hello_world_sdl.cpp"
                 data-name="1.9.0"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.9.0">1.9.0</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.8.14/tests/hello_world_sdl.cpp"
                 data-name="1.8.14"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.8.14">1.8.14</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.8.13/tests/hello_world_sdl.cpp"
                 data-name="1.8.13"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.8.13">1.8.13</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.8.12/tests/hello_world_sdl.cpp"
                 data-name="1.8.12"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.8.12">1.8.12</a>
            </div>
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/kripken/emscripten/tree/1.8.11/tests/hello_world_sdl.cpp"
                 data-name="1.8.11"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="1.8.11">1.8.11</a>
            </div>
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div>

    </div>
  </div>
</div>

  <div class="btn-group right">
    <a href="/kripken/emscripten/find/master"
          class="js-show-file-finder btn btn-sm empty-icon tooltipped tooltipped-s"
          data-pjax
          data-hotkey="t"
          aria-label="Quickly jump between files">
      <span class="octicon octicon-list-unordered"></span>
    </a>
    <button aria-label="Copy file path to clipboard" class="js-zeroclipboard btn btn-sm zeroclipboard-button" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
  </div>

  <div class="breadcrumb js-zeroclipboard-target">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/kripken/emscripten" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">emscripten</span></a></span></span><span class="separator">/</span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/kripken/emscripten/tree/master/tests" class="" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">tests</span></a></span><span class="separator">/</span><strong class="final-path">hello_world_sdl.cpp</strong>
  </div>
</div>


  <div class="commit file-history-tease">
    <div class="file-history-tease-header">
        <img alt="juj" class="avatar" data-user="225351" height="24" src="https://avatars1.githubusercontent.com/u/225351?v=3&amp;s=48" width="24" />
        <span class="author"><a href="/juj" rel="contributor">juj</a></span>
        <time datetime="2014-10-06T12:20:53Z" is="relative-time">Oct 6, 2014</time>
        <div class="commit-title">
            <a href="/kripken/emscripten/commit/270bf2fcdeab375712e88b0e4fb903631561d7dc" class="message" data-pjax="true" title="Optimize Emscripten SDL handwritten JS-implemented SDL_LockSurface() and SDL_UnlockSurface() by adding an option to perform discarding locks that are fast no-ops and to avoid the screen-is-always-opaque emulation which fills alpha=0xFF bytes to each pixel on lock and unlock. Call something like EM_ASM(&quot;SDL.defaults.copyOnLock = false; SDL.defaults.discardOnLock = true; SDL.defaults.opaqueFrontBuffer = false;&quot;); at startup to enable these.">Optimize Emscripten SDL handwritten JS-implemented SDL_LockSurface() …</a>
        </div>
    </div>

    <div class="participation">
      <p class="quickstat">
        <a href="#blob_contributors_box" rel="facebox">
          <strong>3</strong>
           contributors
        </a>
      </p>
          <a class="avatar-link tooltipped tooltipped-s" aria-label="kripken" href="/kripken/emscripten/commits/master/tests/hello_world_sdl.cpp?author=kripken"><img alt="Alon Zakai" class="avatar" data-user="173661" height="20" src="https://avatars3.githubusercontent.com/u/173661?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="juj" href="/kripken/emscripten/commits/master/tests/hello_world_sdl.cpp?author=juj"><img alt="juj" class="avatar" data-user="225351" height="20" src="https://avatars3.githubusercontent.com/u/225351?v=3&amp;s=40" width="20" /></a>
    <a class="avatar-link tooltipped tooltipped-s" aria-label="int3" href="/kripken/emscripten/commits/master/tests/hello_world_sdl.cpp?author=int3"><img alt="Jez Ng" class="avatar" data-user="228496" height="20" src="https://avatars0.githubusercontent.com/u/228496?v=3&amp;s=40" width="20" /></a>


    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
          <li class="facebox-user-list-item">
            <img alt="Alon Zakai" data-user="173661" height="24" src="https://avatars1.githubusercontent.com/u/173661?v=3&amp;s=48" width="24" />
            <a href="/kripken">kripken</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="juj" data-user="225351" height="24" src="https://avatars1.githubusercontent.com/u/225351?v=3&amp;s=48" width="24" />
            <a href="/juj">juj</a>
          </li>
          <li class="facebox-user-list-item">
            <img alt="Jez Ng" data-user="228496" height="24" src="https://avatars2.githubusercontent.com/u/228496?v=3&amp;s=48" width="24" />
            <a href="/int3">int3</a>
          </li>
      </ul>
    </div>
  </div>

<div class="file">
  <div class="file-header">
    <div class="file-actions">

      <div class="btn-group">
        <a href="/kripken/emscripten/raw/master/tests/hello_world_sdl.cpp" class="btn btn-sm " id="raw-url">Raw</a>
          <a href="/kripken/emscripten/blame/master/tests/hello_world_sdl.cpp" class="btn btn-sm js-update-url-with-hash">Blame</a>
        <a href="/kripken/emscripten/commits/master/tests/hello_world_sdl.cpp" class="btn btn-sm " rel="nofollow">History</a>
      </div>

        <a class="octicon-btn tooltipped tooltipped-nw"
           href="github-windows://openRepo/https://github.com/kripken/emscripten?branch=master&amp;filepath=tests%2Fhello_world_sdl.cpp"
           aria-label="Open this file in GitHub for Windows">
            <span class="octicon octicon-device-desktop"></span>
        </a>

            <form accept-charset="UTF-8" action="/kripken/emscripten/edit/master/tests/hello_world_sdl.cpp" class="inline-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="kLVtPdqH6JrGwdjKLALXpM1lUPEzZTvFp0wih//ylYhOeC4nSgW0T3gaSx6rNTXrT0RWdoQIlukKlThkw7pBvQ==" /></div>
              <button class="octicon-btn tooltipped tooltipped-n" type="submit" aria-label="Clicking this button will fork this project so you can edit the file" data-hotkey="e" data-disable-with>
                <span class="octicon octicon-pencil"></span>
              </button>
</form>
          <form accept-charset="UTF-8" action="/kripken/emscripten/delete/master/tests/hello_world_sdl.cpp" class="inline-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /><input name="authenticity_token" type="hidden" value="EJqLLSdKcl5fYxnszg/mfHCEWQGjXa0EFrOJGsoIDEfPGvd0X3xYpDOjW8IBXpAX2ugyZ++fIBMGaQEnQbzUjA==" /></div>
            <button class="octicon-btn octicon-btn-danger tooltipped tooltipped-n" type="submit" aria-label="Fork this project and delete file" data-disable-with>
              <span class="octicon octicon-trashcan"></span>
            </button>
</form>    </div>

    <div class="file-info">
        43 lines (33 sloc)
        <span class="file-info-divider"></span>
      1.386 kb
    </div>
  </div>
  
  <div class="blob-wrapper data type-c">
      <table class="highlight tab-size-8 js-file-line-container">
      <tr>
        <td id="L1" class="blob-num js-line-number" data-line-number="1"></td>
        <td id="LC1" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>stdio.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L2" class="blob-num js-line-number" data-line-number="2"></td>
        <td id="LC2" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>SDL/SDL.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L3" class="blob-num js-line-number" data-line-number="3"></td>
        <td id="LC3" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L4" class="blob-num js-line-number" data-line-number="4"></td>
        <td id="LC4" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> __EMSCRIPTEN__</td>
      </tr>
      <tr>
        <td id="L5" class="blob-num js-line-number" data-line-number="5"></td>
        <td id="LC5" class="blob-code js-file-line">#<span class="pl-k">include</span> <span class="pl-s"><span class="pl-pds">&lt;</span>emscripten.h<span class="pl-pds">&gt;</span></span></td>
      </tr>
      <tr>
        <td id="L6" class="blob-num js-line-number" data-line-number="6"></td>
        <td id="LC6" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L7" class="blob-num js-line-number" data-line-number="7"></td>
        <td id="LC7" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L8" class="blob-num js-line-number" data-line-number="8"></td>
        <td id="LC8" class="blob-code js-file-line"><span class="pl-k">extern</span> <span class="pl-s"><span class="pl-pds">&quot;</span>C<span class="pl-pds">&quot;</span></span> <span class="pl-k">int</span> <span class="pl-en">main</span>(<span class="pl-k">int</span> argc, <span class="pl-k">char</span>** argv) {</td>
      </tr>
      <tr>
        <td id="L9" class="blob-num js-line-number" data-line-number="9"></td>
        <td id="LC9" class="blob-code js-file-line">  <span class="pl-c1">printf</span>(<span class="pl-s"><span class="pl-pds">&quot;</span>hello, world!<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L10" class="blob-num js-line-number" data-line-number="10"></td>
        <td id="LC10" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L11" class="blob-num js-line-number" data-line-number="11"></td>
        <td id="LC11" class="blob-code js-file-line">  <span class="pl-c1">SDL_Init</span>(SDL_INIT_VIDEO);</td>
      </tr>
      <tr>
        <td id="L12" class="blob-num js-line-number" data-line-number="12"></td>
        <td id="LC12" class="blob-code js-file-line">  SDL_Surface *screen = <span class="pl-c1">SDL_SetVideoMode</span>(<span class="pl-c1">256</span>, <span class="pl-c1">256</span>, <span class="pl-c1">32</span>, SDL_SWSURFACE);</td>
      </tr>
      <tr>
        <td id="L13" class="blob-num js-line-number" data-line-number="13"></td>
        <td id="LC13" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L14" class="blob-num js-line-number" data-line-number="14"></td>
        <td id="LC14" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> TEST_SDL_LOCK_OPTS</td>
      </tr>
      <tr>
        <td id="L15" class="blob-num js-line-number" data-line-number="15"></td>
        <td id="LC15" class="blob-code js-file-line">  <span class="pl-c1">EM_ASM</span>(<span class="pl-s"><span class="pl-pds">&quot;</span>SDL.defaults.copyOnLock = false; SDL.defaults.discardOnLock = true; SDL.defaults.opaqueFrontBuffer = false;<span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L16" class="blob-num js-line-number" data-line-number="16"></td>
        <td id="LC16" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L17" class="blob-num js-line-number" data-line-number="17"></td>
        <td id="LC17" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L18" class="blob-num js-line-number" data-line-number="18"></td>
        <td id="LC18" class="blob-code js-file-line">  <span class="pl-k">if</span> (<span class="pl-c1">SDL_MUSTLOCK</span>(screen)) <span class="pl-c1">SDL_LockSurface</span>(screen);</td>
      </tr>
      <tr>
        <td id="L19" class="blob-num js-line-number" data-line-number="19"></td>
        <td id="LC19" class="blob-code js-file-line">  <span class="pl-k">for</span> (<span class="pl-k">int</span> i = <span class="pl-c1">0</span>; i &lt; <span class="pl-c1">256</span>; i++) {</td>
      </tr>
      <tr>
        <td id="L20" class="blob-num js-line-number" data-line-number="20"></td>
        <td id="LC20" class="blob-code js-file-line">    <span class="pl-k">for</span> (<span class="pl-k">int</span> j = <span class="pl-c1">0</span>; j &lt; <span class="pl-c1">256</span>; j++) {</td>
      </tr>
      <tr>
        <td id="L21" class="blob-num js-line-number" data-line-number="21"></td>
        <td id="LC21" class="blob-code js-file-line">#<span class="pl-k">ifdef</span> TEST_SDL_LOCK_OPTS</td>
      </tr>
      <tr>
        <td id="L22" class="blob-num js-line-number" data-line-number="22"></td>
        <td id="LC22" class="blob-code js-file-line">      <span class="pl-c">// Alpha behaves like in the browser, so write proper opaque pixels.</span></td>
      </tr>
      <tr>
        <td id="L23" class="blob-num js-line-number" data-line-number="23"></td>
        <td id="LC23" class="blob-code js-file-line">      <span class="pl-k">int</span> alpha = <span class="pl-c1">255</span>;</td>
      </tr>
      <tr>
        <td id="L24" class="blob-num js-line-number" data-line-number="24"></td>
        <td id="LC24" class="blob-code js-file-line">#<span class="pl-k">else</span></td>
      </tr>
      <tr>
        <td id="L25" class="blob-num js-line-number" data-line-number="25"></td>
        <td id="LC25" class="blob-code js-file-line">      <span class="pl-c">// To emulate native behavior with blitting to screen, alpha component is ignored. Test that it is so by outputting</span></td>
      </tr>
      <tr>
        <td id="L26" class="blob-num js-line-number" data-line-number="26"></td>
        <td id="LC26" class="blob-code js-file-line">      <span class="pl-c">// data (and testing that it does get discarded)</span></td>
      </tr>
      <tr>
        <td id="L27" class="blob-num js-line-number" data-line-number="27"></td>
        <td id="LC27" class="blob-code js-file-line">      <span class="pl-k">int</span> alpha = (i+j) % <span class="pl-c1">255</span>;</td>
      </tr>
      <tr>
        <td id="L28" class="blob-num js-line-number" data-line-number="28"></td>
        <td id="LC28" class="blob-code js-file-line">#<span class="pl-k">endif</span></td>
      </tr>
      <tr>
        <td id="L29" class="blob-num js-line-number" data-line-number="29"></td>
        <td id="LC29" class="blob-code js-file-line">      *((Uint32*)screen-&gt;pixels + i * <span class="pl-c1">256</span> + j) = <span class="pl-c1">SDL_MapRGBA</span>(screen-&gt;format, i, j, <span class="pl-c1">255</span>-i, alpha);</td>
      </tr>
      <tr>
        <td id="L30" class="blob-num js-line-number" data-line-number="30"></td>
        <td id="LC30" class="blob-code js-file-line">    }</td>
      </tr>
      <tr>
        <td id="L31" class="blob-num js-line-number" data-line-number="31"></td>
        <td id="LC31" class="blob-code js-file-line">  }</td>
      </tr>
      <tr>
        <td id="L32" class="blob-num js-line-number" data-line-number="32"></td>
        <td id="LC32" class="blob-code js-file-line">  <span class="pl-k">if</span> (<span class="pl-c1">SDL_MUSTLOCK</span>(screen)) <span class="pl-c1">SDL_UnlockSurface</span>(screen);</td>
      </tr>
      <tr>
        <td id="L33" class="blob-num js-line-number" data-line-number="33"></td>
        <td id="LC33" class="blob-code js-file-line">  <span class="pl-c1">SDL_Flip</span>(screen); </td>
      </tr>
      <tr>
        <td id="L34" class="blob-num js-line-number" data-line-number="34"></td>
        <td id="LC34" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L35" class="blob-num js-line-number" data-line-number="35"></td>
        <td id="LC35" class="blob-code js-file-line">  <span class="pl-c1">printf</span>(<span class="pl-s"><span class="pl-pds">&quot;</span>you should see a smoothly-colored square - no sharp lines but the square borders!<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L36" class="blob-num js-line-number" data-line-number="36"></td>
        <td id="LC36" class="blob-code js-file-line">  <span class="pl-c1">printf</span>(<span class="pl-s"><span class="pl-pds">&quot;</span>and here is some text that should be HTML-friendly: amp: |&amp;| double-quote: |<span class="pl-cce">\&quot;</span>| quote: |&#39;| less-than, greater-than, html-like tags: |&lt;cheez&gt;&lt;/cheez&gt;|<span class="pl-cce">\n</span>another line.<span class="pl-cce">\n</span><span class="pl-pds">&quot;</span></span>);</td>
      </tr>
      <tr>
        <td id="L37" class="blob-num js-line-number" data-line-number="37"></td>
        <td id="LC37" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L38" class="blob-num js-line-number" data-line-number="38"></td>
        <td id="LC38" class="blob-code js-file-line">  <span class="pl-c1">SDL_Quit</span>();</td>
      </tr>
      <tr>
        <td id="L39" class="blob-num js-line-number" data-line-number="39"></td>
        <td id="LC39" class="blob-code js-file-line">
</td>
      </tr>
      <tr>
        <td id="L40" class="blob-num js-line-number" data-line-number="40"></td>
        <td id="LC40" class="blob-code js-file-line">  <span class="pl-k">return</span> <span class="pl-c1">0</span>;</td>
      </tr>
      <tr>
        <td id="L41" class="blob-num js-line-number" data-line-number="41"></td>
        <td id="LC41" class="blob-code js-file-line">}</td>
      </tr>
      <tr>
        <td id="L42" class="blob-num js-line-number" data-line-number="42"></td>
        <td id="LC42" class="blob-code js-file-line">
</td>
      </tr>
</table>

  </div>

</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" action="" class="js-jump-to-line-form" method="get"><div style="margin:0;padding:0;display:inline"><input name="utf8" type="hidden" value="&#x2713;" /></div>
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="btn">Go</button>
</form></div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer" role="contentinfo">
    <ul class="site-footer-links right">
        <li><a href="https://status.github.com/" data-ga-click="Footer, go to status, text:status">Status</a></li>
      <li><a href="https://developer.github.com" data-ga-click="Footer, go to api, text:api">API</a></li>
      <li><a href="https://training.github.com" data-ga-click="Footer, go to training, text:training">Training</a></li>
      <li><a href="https://shop.github.com" data-ga-click="Footer, go to shop, text:shop">Shop</a></li>
        <li><a href="https://github.com/blog" data-ga-click="Footer, go to blog, text:blog">Blog</a></li>
        <li><a href="https://github.com/about" data-ga-click="Footer, go to about, text:about">About</a></li>

    </ul>

    <a href="https://github.com" aria-label="Homepage">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
</a>
    <ul class="site-footer-links">
      <li>&copy; 2015 <span title="0.07179s from github-fe138-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="https://github.com/site/terms" data-ga-click="Footer, go to terms, text:terms">Terms</a></li>
        <li><a href="https://github.com/site/privacy" data-ga-click="Footer, go to privacy, text:privacy">Privacy</a></li>
        <li><a href="https://github.com/security" data-ga-click="Footer, go to security, text:security">Security</a></li>
        <li><a href="https://github.com/contact" data-ga-click="Footer, go to contact, text:contact">Contact</a></li>
    </ul>
  </div>
</div>


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-suggester-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="fullscreen-contents js-fullscreen-contents" placeholder=""></textarea>
      <div class="suggester-container">
        <div class="suggester fullscreen-suggester js-suggester js-navigation-container"></div>
      </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    
    

    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-x flash-close js-ajax-error-dismiss" aria-label="Dismiss error"></a>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-d22b59d0085e83b7549ba4341ec9e68f80c2f29c8e49213ee182003dc8d568c6.js"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-2c46bf7af744168851951e2fa4f404675a09c3d3f5b8ec92e4d28c3238de7936.js"></script>
      
      

  </body>
</html>

