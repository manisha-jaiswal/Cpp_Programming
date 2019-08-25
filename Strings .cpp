<!DOCTYPE html>
<!-- saved from url=(0064)https://www.hackerrank.com/challenges/c-tutorial-strings/problem -->
<html lang="en-us" style="--font-family-text:OpenSans, Arial, Helvetica, sans-serif; --font-family-input:SourceCodePro, monaco, Courier, monospace;" class=""><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style id="react-tooltip">.__react_component_tooltip{border-radius:3px;display:inline-block;font-size:13px;left:-999em;opacity:0;padding:8px 21px;position:fixed;pointer-events:none;transition:opacity 0.3s ease-out;top:-999em;visibility:hidden;z-index:999}.__react_component_tooltip.allow_hover{pointer-events:auto}.__react_component_tooltip:before,.__react_component_tooltip:after{content:"";width:0;height:0;position:absolute}.__react_component_tooltip.show{opacity:0.9;margin-top:0px;margin-left:0px;visibility:visible}.__react_component_tooltip.type-dark{color:#fff;background-color:#222}.__react_component_tooltip.type-dark.place-top:after{border-top-color:#222;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-dark.place-bottom:after{border-bottom-color:#222;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-dark.place-left:after{border-left-color:#222;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-dark.place-right:after{border-right-color:#222;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-dark.border{border:1px solid #fff}.__react_component_tooltip.type-dark.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-dark.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-dark.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-dark.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-success{color:#fff;background-color:#8DC572}.__react_component_tooltip.type-success.place-top:after{border-top-color:#8DC572;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-success.place-bottom:after{border-bottom-color:#8DC572;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-success.place-left:after{border-left-color:#8DC572;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-success.place-right:after{border-right-color:#8DC572;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-success.border{border:1px solid #fff}.__react_component_tooltip.type-success.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-success.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-success.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-success.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-warning{color:#fff;background-color:#F0AD4E}.__react_component_tooltip.type-warning.place-top:after{border-top-color:#F0AD4E;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-warning.place-bottom:after{border-bottom-color:#F0AD4E;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-warning.place-left:after{border-left-color:#F0AD4E;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-warning.place-right:after{border-right-color:#F0AD4E;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-warning.border{border:1px solid #fff}.__react_component_tooltip.type-warning.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-warning.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-warning.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-warning.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-error{color:#fff;background-color:#BE6464}.__react_component_tooltip.type-error.place-top:after{border-top-color:#BE6464;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-error.place-bottom:after{border-bottom-color:#BE6464;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-error.place-left:after{border-left-color:#BE6464;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-error.place-right:after{border-right-color:#BE6464;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-error.border{border:1px solid #fff}.__react_component_tooltip.type-error.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-error.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-error.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-error.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-info{color:#fff;background-color:#337AB7}.__react_component_tooltip.type-info.place-top:after{border-top-color:#337AB7;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-info.place-bottom:after{border-bottom-color:#337AB7;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-info.place-left:after{border-left-color:#337AB7;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-info.place-right:after{border-right-color:#337AB7;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-info.border{border:1px solid #fff}.__react_component_tooltip.type-info.border.place-top:before{border-top:8px solid #fff}.__react_component_tooltip.type-info.border.place-bottom:before{border-bottom:8px solid #fff}.__react_component_tooltip.type-info.border.place-left:before{border-left:8px solid #fff}.__react_component_tooltip.type-info.border.place-right:before{border-right:8px solid #fff}.__react_component_tooltip.type-light{color:#222;background-color:#fff}.__react_component_tooltip.type-light.place-top:after{border-top-color:#fff;border-top-style:solid;border-top-width:6px}.__react_component_tooltip.type-light.place-bottom:after{border-bottom-color:#fff;border-bottom-style:solid;border-bottom-width:6px}.__react_component_tooltip.type-light.place-left:after{border-left-color:#fff;border-left-style:solid;border-left-width:6px}.__react_component_tooltip.type-light.place-right:after{border-right-color:#fff;border-right-style:solid;border-right-width:6px}.__react_component_tooltip.type-light.border{border:1px solid #222}.__react_component_tooltip.type-light.border.place-top:before{border-top:8px solid #222}.__react_component_tooltip.type-light.border.place-bottom:before{border-bottom:8px solid #222}.__react_component_tooltip.type-light.border.place-left:before{border-left:8px solid #222}.__react_component_tooltip.type-light.border.place-right:before{border-right:8px solid #222}.__react_component_tooltip.place-top{margin-top:-10px}.__react_component_tooltip.place-top:before{border-left:10px solid transparent;border-right:10px solid transparent;bottom:-8px;left:50%;margin-left:-10px}.__react_component_tooltip.place-top:after{border-left:8px solid transparent;border-right:8px solid transparent;bottom:-6px;left:50%;margin-left:-8px}.__react_component_tooltip.place-bottom{margin-top:10px}.__react_component_tooltip.place-bottom:before{border-left:10px solid transparent;border-right:10px solid transparent;top:-8px;left:50%;margin-left:-10px}.__react_component_tooltip.place-bottom:after{border-left:8px solid transparent;border-right:8px solid transparent;top:-6px;left:50%;margin-left:-8px}.__react_component_tooltip.place-left{margin-left:-10px}.__react_component_tooltip.place-left:before{border-top:6px solid transparent;border-bottom:6px solid transparent;right:-8px;top:50%;margin-top:-5px}.__react_component_tooltip.place-left:after{border-top:5px solid transparent;border-bottom:5px solid transparent;right:-6px;top:50%;margin-top:-4px}.__react_component_tooltip.place-right{margin-left:10px}.__react_component_tooltip.place-right:before{border-top:6px solid transparent;border-bottom:6px solid transparent;left:-8px;top:50%;margin-top:-5px}.__react_component_tooltip.place-right:after{border-top:5px solid transparent;border-bottom:5px solid transparent;left:-6px;top:50%;margin-top:-4px}.__react_component_tooltip .multi-line{display:block;padding:2px 0px;text-align:center}</style>
  
  
  <meta property="og:image" id="meta-og-image" content="https://hrcdn.net/og/default.jpg"><meta property="og:site_name" id="meta-og-site" content="HackerRank"><meta property="og:type" id="meta-og-type" content="website"><meta property="article:author" content="https://www.facebook.com/hackerrank"><meta name="twitter:card" id="meta-twitter-card" content="summary"><meta name="twitter:site" id="meta-twitter-site" content="@hackerrank"><meta property="fb:app_id" id="meta-fb-id" content="347499128655783"><meta name="theme-color" content="rgb(57, 66, 78)"><meta content="authenticity_token" name="csrf-param" id="csrf-param"><meta content="b7+hCZuoxbfs3+C1e4CDTHdvYhntm15T0u7CB2lndTgbB3AxhJxb4LeflQcxB8P9EbDK15YoSLrAJb7edos/oA==" name="csrf-token" id="csrf-token">
  <script type="text/javascript" async="" src="./Strings _files/mixpanel-2-latest.min.js.download"></script><script type="text/javascript" async="" src="./Strings _files/ga.js.download"></script><script async="" src="./Strings _files/gtm.js.download"></script><script>/*!
 * JavaScript Cookie v2.1.3
 * https://github.com/js-cookie/js-cookie
 *
 * Copyright 2006, 2015 Klaus Hartl & Fagner Brack
 * Released under the MIT license
 */
;(function (factory) {
	var registeredInModuleLoader = false;
	if (typeof define === 'function' && define.amd) {
		define(factory);
		registeredInModuleLoader = true;
	}
	if (typeof exports === 'object') {
		module.exports = factory();
		registeredInModuleLoader = true;
	}
	if (!registeredInModuleLoader) {
		var OldCookies = window.Cookies;
		var api = window.Cookies = factory();
		api.noConflict = function () {
			window.Cookies = OldCookies;
			return api;
		};
	}
}(function () {
	function extend () {
		var i = 0;
		var result = {};
		for (; i < arguments.length; i++) {
			var attributes = arguments[ i ];
			for (var key in attributes) {
				result[key] = attributes[key];
			}
		}
		return result;
	}

	function init (converter) {
		function api (key, value, attributes) {
			var result;
			if (typeof document === 'undefined') {
				return;
			}

			// Write

			if (arguments.length > 1) {
				attributes = extend({
					path: '/'
				}, api.defaults, attributes);

				if (typeof attributes.expires === 'number') {
					var expires = new Date();
					expires.setMilliseconds(expires.getMilliseconds() + attributes.expires * 864e+5);
					attributes.expires = expires;
				}

				try {
					result = JSON.stringify(value);
					if (/^[\{\[]/.test(result)) {
						value = result;
					}
				} catch (e) {}

				if (!converter.write) {
					value = encodeURIComponent(String(value))
						.replace(/%(23|24|26|2B|3A|3C|3E|3D|2F|3F|40|5B|5D|5E|60|7B|7D|7C)/g, decodeURIComponent);
				} else {
					value = converter.write(value, key);
				}

				key = encodeURIComponent(String(key));
				key = key.replace(/%(23|24|26|2B|5E|60|7C)/g, decodeURIComponent);
				key = key.replace(/[\(\)]/g, escape);

				return (document.cookie = [
					key, '=', value,
					attributes.expires ? '; expires=' + attributes.expires.toUTCString() : '', // use expires attribute, max-age is not supported by IE
					attributes.path ? '; path=' + attributes.path : '',
					attributes.domain ? '; domain=' + attributes.domain : '',
					attributes.secure ? '; secure' : ''
				].join(''));
			}

			// Read

			if (!key) {
				result = {};
			}

			// To prevent the for loop in the first place assign an empty array
			// in case there are no cookies at all. Also prevents odd result when
			// calling "get()"
			var cookies = document.cookie ? document.cookie.split('; ') : [];
			var rdecode = /(%[0-9A-Z]{2})+/g;
			var i = 0;

			for (; i < cookies.length; i++) {
				var parts = cookies[i].split('=');
				var cookie = parts.slice(1).join('=');

				if (cookie.charAt(0) === '"') {
					cookie = cookie.slice(1, -1);
				}

				try {
					var name = parts[0].replace(rdecode, decodeURIComponent);
					cookie = converter.read ?
						converter.read(cookie, name) : converter(cookie, name) ||
						cookie.replace(rdecode, decodeURIComponent);

					if (this.json) {
						try {
							cookie = JSON.parse(cookie);
						} catch (e) {}
					}

					if (key === name) {
						result = cookie;
						break;
					}

					if (!key) {
						result[name] = cookie;
					}
				} catch (e) {}
			}

			return result;
		}

		api.set = api;
		api.get = function (key) {
			return api.call(api, key);
		};
		api.getJSON = function () {
			return api.apply({
				json: true
			}, [].slice.call(arguments));
		};
		api.defaults = {};

		api.remove = function (key, attributes) {
			api(key, '', extend(attributes, {
				expires: -1
			}));
		};

		api.withConverter = init;

		return api;
	}

	return init(function () {});
}));
</script>
  <script>
    window.BACKEND_ENDPOINT = 'https://www.hackerrank.com/';
    window.MANIFEST_VERSION = '0ad232fa1a';
  </script>

  

  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="icon" type="image/png" href="https://hrcdn.net/fcore/assets/favicon-62bdd46faf.png">

  <!-- Prefetch dns on production -->
  
    <link rel="dns-prefetch" href="https://hrcdn.net/">
    <link rel="dns-prefetch" href="https://d3keuzeb2crhkn.cloudfront.net/">
    <link rel="dns-prefetch" href="https://notifications.hackerrank.com/">
    <link rel="dns-prefetch" href="https://api.mixpanel.com/">
    <link rel="dns-prefetch" href="https://metrics.hackerrank.com/">
    <link rel="preconnect" href="https://sentry.io/">
    <link rel="dns-prefetch" href="https://sentry.io/">
  

  


  
    <link href="./Strings _files/hackerrank_r_old_trimmed-ca776db9.css" media="all" rel="stylesheet"><link rel="stylesheet" href="./Strings _files/hackerrank_r_old_trimmed-ca776db9.css">
  

  
    <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_vendors_community_work-ac09ed2e.css">
  
    <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_vendors_community-09dc0bbc.css">
  
    <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_modules_custominput_community_work-6e874094.css">
  
    <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_modules_community_work-82457ce0.css">
  
    <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_commons_community_sourcing_applications-bb4dc334.css">
  
    <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_commons_community_work-bcb78d7a.css">
  
    <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_community-6f98e39d.css">
  
    <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_modules_app-376312ec.css">
  
    <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_app-0786490b.css">
  
    <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_vendors_challenge_dashboard_jobs_testquestions_testinvite_testsettings_library-1cd129b7.css">
  
    <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_vendors_dashboard-87f0cfa7.css">
  
    <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_commons_dashboard_jobs-2b672b46.css">
  
    <link rel="stylesheet" type="text/css" href="./Strings _files/dashboard-173b5e46b8.css">
  
    <link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_dashboard-5e8de9d1.css">
  

  <!-- Prefetch / preload assets on production -->
  

    <!-- preload scripts required on the same page -->
    <link rel="preload" as="script" href="./Strings _files/hackerrank_r_vendor-50032c7c7e.js.download">
    <link rel="preload" as="script" href="./Strings _files/hackerrank_r_client-15930085.js.download">
    <link rel="preload" as="script" href="./Strings _files/runtime-8af8f34d.js.download">

    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_modules_custominput_community_work-6cac4eba.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_vendors_custominput_community_work-c41abfa7.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_vendors_lsp_client_community_work-43c3f13c.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_commons_community_sourcing_applications-378c199f.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_commons_community_work-9aab5ab7.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_modules_community_work-06b8a7a0.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_vendors_community_library-17058afa.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_vendors_community_work-7cdfdd7e.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_community-3b42a6e5.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_vendors_community-ebe24335.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_app-c258475b.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_modules_app-af8f51ca.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_vendors_app-51da7887.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_vendors_challenge_dashboard_jobs_testquestions_testinvite_testsettings_library-6072e6c8.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_commons_dashboard_jobs-d8051f70.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_dashboard-664258a3.js.download">
    
      <link rel="preload" as="script" href="./Strings _files/hackerrank_r_vendors_dashboard-d1684474.js.download">
    
    <!-- preload scripts end -->

    <!-- Prefetch old css files -->
    <link rel="prefetch" href="https://hrcdn.net/fcore/assets/backbone_styles/hackerrank-core-b09922f4c9.css">
    <link rel="prefetch" href="https://hrcdn.net/fcore/assets/backbone_styles/hackerrank_libraries-6d1eda62f2.css">

    
      <link rel="prefetch" href="./Strings _files/dashboard-173b5e46b8.css">
    
    <!-- Prefetch old css files end -->

  

  <!-- Load promise polyfill for the non-believers -->
  <script>
    window.Promise || document.write('<script src="https://hrcdn.net/fcore/assets/polyfill-d05a380d50.min.js" type="text\/javascript"><\/script>');
  </script>
  <!-- Added for GTM -->
  <!-- GTM setup -->

<script>
  dataLayer = [];
  window.jsTrackGoogleAnalytics = window.jsTrackGoogleAnalytics || function () {};
</script>

<!-- Google Tag Manager #1 -->
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer', 'GTM-5FXW96J');</script>
<!-- End Google Tag Manager 1 -->



<script charset="utf-8" src="./Strings _files/hackerrank_r_modules_app-af8f51ca.js.download"></script><script charset="utf-8" src="./Strings _files/custominput-67e48ccf.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_app-51da7887.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_app-c258475b.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_modules_custominput_community_work-6cac4eba.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_modules_community_work-06b8a7a0.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_custominput_community_work-c41abfa7.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_lsp_client_community_work-43c3f13c.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_community_work-7cdfdd7e.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_community_library-17058afa.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_community-ebe24335.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_commons_community_work-9aab5ab7.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_commons_community_sourcing_applications-378c199f.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_community-3b42a6e5.js.download"></script><link rel="prefetch" href="./Strings _files/hackerrank_r_challenge_list-81eac888.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_jobs_profile_v2_interview_singletest_library_teams-8287041c.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_vendors_work_challenge_list_challenge_list_v2_challenge_jobs_calendar_onboarding_scoring_interview-a645a940.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_onboarding_profile_v2_interview-0f6234e2.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_vendors_challenge_list_challenge_list_v2_jobs_scoring_interview-f71ceb58.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_interview-37a6c241.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_modules_challenge_list_challenge_list_v2_challenge_interview-3d9b0d10.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_interview-36b7dc29.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_modules_challenge_list_challenge_list_v2_challenge_interview-835fdea9.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_jobs_profile_v2_interview_singletest_library_teams-70664de4.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_onboarding_profile_v2_interview-84fa70d3.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_interview-e1e631c8.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_interview-369b43d4.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_challenge_list-ca95fcf0.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_challenge_list_v2-adf98d7e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_forum-f072e59a.js"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_contest_challenge_leaderboardv2_forum_leaderboard-066da2a5.js.download"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~forum-f9551825.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~forum-67bc1117.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_contest_challenge_leaderboardv2_forum_leaderboard-6f0475fc.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_forum-60b7db90.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_challenge-753653d3.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard_scoring-b0283ba9.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard-7aa9328d.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_contest_challenge_leaderboardv2_leaderboard-64eb033d.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_challenge_onboarding-e9d02901.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_vendors_challenge_onboarding-1cca85ea.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_vendors_challenge-6b202728.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_vendors_challenge_dashboard_jobs_testquestions_testinvite_testsettings_library-1cd129b7.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_vendors_challenge-e06f8a9e.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard_scoring-75c2c596.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard-d227ab5d.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_contest_challenge_leaderboardv2_leaderboard-40846755.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_challenge_onboarding-ae79f601.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_challenge-94ba2aea.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-76619ad9.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~contest~leaderboardv2~leaderboard-572854c7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~contest~leaderboardv2~leaderboard-a86b7977.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_contest-0cc1c516.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboardv2-64d53a11.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboardv2-7ef07083.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_vendors_dashboard-87f0cfa7.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_commons_dashboard_jobs-2b672b46.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_dashboard-5e8de9d1.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboard-a346d169.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_leaderboard-cb6e1dc7.css"><style>
html.scroll-hidden,html.scroll-hidden body{
  overflow: hidden;
  height:100vh;
}
html.scroll-hidden.pad-adjustment body{
    padding-right : 17px;
}
html.scroll-hidden.pad-adjustment .fixed-elm{
    padding-right : 17px;
}</style><script charset="utf-8" src="./Strings _files/hackerrank_r_old_trimmed-5fc58655.js.download"></script><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_survey-f0ad47c7.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~work~survey~jobs~profile_v2-0fd8d636.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~work~survey~jobs~profile_v2-6ca4281c.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~survey~profile_v2-b499174b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~survey-4dc4ad5e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~work~survey~jobs~profile_v2-ecba7e13.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~survey-15014cff.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~survey~profile_v2-322c424c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_survey-1b6e5569.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_company_header-c81bf4e6.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_company_header-6cdfec43.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-dfce6c8f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~jobs~sourcing_applications~sourcing_messages-c227b444.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~jobs~testinvite~testsettings-4517df8d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~jobs~sourcing_messages-88846757.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~work~jobs-6aa4fba9.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~jobs~testquestions-7cb4790b.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~jobs-58b766b5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~sourcing_company_jobs-9de57216.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_sourcing_company_jobs-20086db5.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~jobs-988adee0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~jobs-cc4188c7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~jobs-aeae1826.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~sourcing_company_jobs-d049e34c.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~jobs~sourcing_applications~sourcing_messages-2a298d65.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~jobs~sourcing_messages-1fedf85e.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_commons~work~jobs-c1ce9823.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs-f600722f.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_sourcing_company_jobs-fa52e2e7.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_profile_v2-3012bf4d.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~profile_v2-4930ddb0.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~profile_v2-135a2778.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~profile_v2-2255cb29.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_profile_v2-1dc92509.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_calendar-7a477c76.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~calendar-a119ab88.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_calendar-0b1991a1.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_onboarding-edaafa5f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~onboarding-10f4507e.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_modules~onboarding-2325cccf.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_onboarding-df616200.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_charts-9eaebd5f.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_charts-065f11d4.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_scoring-40947281.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_scoring-4e51bc41.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_interview-3a958adb.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_vendors_interview-5644d636.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_vendors_interview-87f0cfa7.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_interview-d2fea1f1.css"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_auth-9aecb645.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_auth-d5c9b1c0.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_krackjack-470240c0.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_modules_krackjack-9679d62f.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_vendors_krackjack-6069ba81.js.download"><link rel="prefetch" href="./Strings _files/hackerrank_r_vendors_krackjack-f804e5be.css"><link rel="prefetch" href="./Strings _files/hackerrank_r_modules_krackjack-7446df2c.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_challenge_dashboard_jobs_testquestions_testinvite_testsettings_library-6072e6c8.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_dashboard-d1684474.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_commons_dashboard_jobs-d8051f70.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_dashboard-664258a3.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_modules_challenge_list_challenge_list_v2_challenge_interview-835fdea9.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_modules_challenge_list_challenge_list_v2_challenge_interview-3d9b0d10.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_work_challenge_list_challenge_list_v2_challenge_jobs_calendar_onboarding_scoring_interview-a645a940.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_challenge_list_challenge_list_v2_jobs_scoring_interview-f71ceb58.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_jobs_profile_v2_interview_singletest_library_teams-70664de4.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_jobs_profile_v2_interview_singletest_library_teams-8287041c.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_onboarding_profile_v2_interview-84fa70d3.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_onboarding_profile_v2_interview-0f6234e2.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_interview-e1e631c8.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_challenge_interview-37a6c241.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_interview-369b43d4.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_commons_challenge_list_challenge_list_v2_interview-36b7dc29.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_challenge_list-ca95fcf0.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_challenge_list-81eac888.js.download"></script><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_intersection_observer-cba8b2c6.js"><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard_scoring-75c2c596.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard_scoring-b0283ba9.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard-d227ab5d.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_modules_work_contest_challenge_leaderboardv2_leaderboard-7aa9328d.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_challenge_onboarding-1cca85ea.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_vendors_challenge-e06f8a9e.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_challenge-6b202728.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_commons_contest_challenge_leaderboardv2_forum_leaderboard-6f0475fc.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_commons_contest_challenge_leaderboardv2_forum_leaderboard-066da2a5.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_commons_contest_challenge_leaderboardv2_leaderboard-40846755.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_commons_contest_challenge_leaderboardv2_leaderboard-64eb033d.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_commons_challenge_onboarding-ae79f601.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_commons_challenge_onboarding-e9d02901.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_challenge-94ba2aea.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_challenge-753653d3.js.download"></script><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_codeshell_lib-5bbffae1.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_vendors~codeshell_lib-8ca9c002.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/codeshell_editor_theme_m-58ab40b2.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/codeshell_editor_theme_m-f50c12dc.css"><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_modules_krackjack-7446df2c.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_modules_krackjack-9679d62f.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_vendors_krackjack-f804e5be.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_krackjack-6069ba81.js.download"></script><script charset="utf-8" src="./Strings _files/hackerrank_r_krackjack-470240c0.js.download"></script><style type="text/css" media="screen" class="monaco-colors">.monaco-editor .accessibilityHelpWidget { background-color: #efeff2; }
.monaco-editor .accessibilityHelpWidget { box-shadow: 0 2px 8px #a8a8a8; }
.monaco-editor, .monaco-editor-background, .monaco-editor .inputarea.ime-input { background-color: #fffffe; }
.monaco-editor, .monaco-editor .inputarea.ime-input { color: #000000; }
.monaco-editor .margin { background-color: #fffffe; }
.monaco-editor .rangeHighlight { background-color: rgba(253, 255, 0, 0.2); }
.vs-whitespace { color: rgba(51, 51, 51, 0.2) !important; }
.monaco-editor .bracket-match { background-color: rgba(0, 100, 0, 0.1); }
.monaco-editor .bracket-match { border: 1px solid #b9b9b9; }
.monaco-editor .monaco-editor-overlaymessage .anchor { border-top-color: #007acc; }
.monaco-editor .monaco-editor-overlaymessage .message { border: 1px solid #007acc; }
.monaco-editor .monaco-editor-overlaymessage .message { background-color: #d6ecf2; }
.monaco-editor .codelens-decoration { color: #999999; }
.monaco-editor .codelens-decoration > a:hover { color: #0000ff !important; }
.monaco-editor .findMatch { background-color: rgba(234, 92, 0, 0.33); }
.monaco-editor .currentFindMatch { background-color: #a8ac94; }
.monaco-editor .findScope { background-color: rgba(180, 180, 180, 0.3); }
.monaco-editor .find-widget { background-color: #efeff2; }
.monaco-editor .find-widget { box-shadow: 0 2px 8px #a8a8a8; }
.monaco-editor .find-widget.no-results .matchesCount { color: #a1260d; }
.monaco-editor .find-widget .monaco-sash { background-color: #c8c8c8; width: 3px !important; margin-left: -4px;}
.monaco-editor .findOptionsWidget { background-color: #efeff2; }
.monaco-editor .findOptionsWidget { box-shadow: 0 2px 8px #a8a8a8; }
.monaco-editor .line-numbers { color: #237893; }
.monaco-editor .current-line ~ .line-numbers { color: #0b216f; }
.monaco-editor .view-overlays .current-line { background-color: #eaf2fe; }
.monaco-editor .margin-view-overlays .current-line-margin { background-color: #eaf2fe; border: none; }
.monaco-editor .lines-content .cigr { box-shadow: 1px 0 0 0 #d3d3d3 inset; }
.monaco-editor .lines-content .cigra { box-shadow: 1px 0 0 0 #939393 inset; }
.monaco-editor .view-ruler { box-shadow: 1px 0 0 0 #d3d3d3 inset; }
.monaco-editor .scroll-decoration { box-shadow: #dddddd 0 6px 6px -6px inset; }
.monaco-editor .focused .selected-text { background-color: #add6ff; }
.monaco-editor .selected-text { background-color: #e5ebf1; }
.monaco-editor .cursor { background-color: #000000; border-color: #000000; color: #ffffff; }
.monaco-editor .minimap-slider, .monaco-editor .minimap-slider .minimap-slider-horizontal { background: rgba(100, 100, 100, 0.2); }
.monaco-editor .minimap-slider:hover, .monaco-editor .minimap-slider:hover .minimap-slider-horizontal { background: rgba(100, 100, 100, 0.35); }
.monaco-editor .minimap-slider.active, .monaco-editor .minimap-slider.active .minimap-slider-horizontal { background: rgba(0, 0, 0, 0.3); }
.monaco-editor .minimap-shadow-visible { box-shadow: #dddddd -6px 0 6px -6px inset; }
.monaco-editor .squiggly-error { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23d60a0a'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-warning { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23117711'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-info { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23008000'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-hint { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%20height%3D%223%22%20width%3D%2212%22%3E%3Cg%20fill%3D%22%236c6c6c%22%3E%3Ccircle%20cx%3D%221%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%225%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%229%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") no-repeat bottom left; }
.showUnused .monaco-editor .squiggly-inline-unnecessary { opacity: 0.467; will-change: opacity; }
.monaco-editor .reference-zone-widget .ref-tree .referenceMatch { background-color: rgba(234, 92, 0, 0.3); }
.monaco-editor .reference-zone-widget .preview .reference-decoration { background-color: rgba(245, 216, 2, 0.87); }
.monaco-editor .reference-zone-widget .ref-tree { background-color: #f3f3f3; }
.monaco-editor .reference-zone-widget .ref-tree { color: #646465; }
.monaco-editor .reference-zone-widget .ref-tree .reference-file { color: #1e1e1e; }
.monaco-editor .reference-zone-widget .ref-tree .monaco-tree.focused .monaco-tree-rows > .monaco-tree-row.selected:not(.highlighted) { background-color: rgba(51, 153, 255, 0.2); }
.monaco-editor .reference-zone-widget .ref-tree .monaco-tree.focused .monaco-tree-rows > .monaco-tree-row.selected:not(.highlighted) { color: #6c6c6c !important; }
.monaco-editor .reference-zone-widget .preview .monaco-editor .monaco-editor-background,.monaco-editor .reference-zone-widget .preview .monaco-editor .inputarea.ime-input {	background-color: #f2f8fc;}
.monaco-editor .reference-zone-widget .preview .monaco-editor .margin {	background-color: #f2f8fc;}
.monaco-editor .goto-definition-link { color: #0000ff !important; }
.monaco-editor .hoverHighlight { background-color: rgba(173, 214, 255, 0.15); }
.monaco-editor .monaco-editor-hover { background-color: #efeff2; }
.monaco-editor .monaco-editor-hover { border: 1px solid #c8c8c8; }
.monaco-editor .monaco-editor-hover .hover-row:not(:first-child):not(:empty) { border-top: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .monaco-editor-hover a { color: #006ab1; }
.monaco-editor .monaco-editor-hover code { background-color: rgba(220, 220, 220, 0.4); }
.monaco-editor.vs .valueSetReplacement { outline: solid 2px #b9b9b9; }
.monaco-editor .tokens-inspect-widget { border: 1px solid #c8c8c8; }
.monaco-editor .tokens-inspect-widget .tokens-inspect-separator { background-color: #c8c8c8; }
.monaco-editor .tokens-inspect-widget { background-color: #efeff2; }
.monaco-editor .detected-link-active { color: #0000ff !important; }
.monaco-editor .parameter-hints-widget { border: 1px solid #c8c8c8; }
.monaco-editor .parameter-hints-widget.multiple .body { border-left: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .parameter-hints-widget .signature.has-docs { border-bottom: 1px solid rgba(200, 200, 200, 0.5); }
.monaco-editor .parameter-hints-widget { background-color: #efeff2; }
.monaco-editor .parameter-hints-widget a { color: #006ab1; }
.monaco-editor .parameter-hints-widget code { background-color: rgba(220, 220, 220, 0.4); }
.monaco-editor .suggest-widget .monaco-list .monaco-list-row .monaco-highlighted-label .highlight { color: #007acc; }
.monaco-editor .suggest-widget { color: #000000; }
.monaco-editor .suggest-widget a { color: #006ab1; }
.monaco-editor .suggest-widget code { background-color: rgba(220, 220, 220, 0.4); }
.monaco-editor .focused .selectionHighlight { background-color: rgba(173, 214, 255, 0.3); }
.monaco-editor .selectionHighlight { background-color: rgba(173, 214, 255, 0.15); }
.monaco-editor .wordHighlight { background-color: rgba(87, 87, 87, 0.25); }
.monaco-editor .wordHighlightStrong { background-color: rgba(14, 99, 156, 0.25); }
.monaco-diff-editor .diff-review-line-number { color: #237893; }
.monaco-diff-editor .diff-review-shadow { box-shadow: #dddddd 0 -6px 6px -6px inset; }
.monaco-editor .line-insert, .monaco-editor .char-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-diff-editor .line-insert, .monaco-diff-editor .char-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .inline-added-margin-view-zone { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .line-delete, .monaco-editor .char-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor .line-delete, .monaco-diff-editor .char-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-editor .inline-deleted-margin-view-zone { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor.side-by-side .editor.modified { box-shadow: -6px 0 5px -5px #dddddd; }

.mtk1 { color: #000000; }
.mtk2 { color: #fffffe; }
.mtk3 { color: #808080; }
.mtk4 { color: #ff0000; }
.mtk5 { color: #0451a5; }
.mtk6 { color: #0000ff; }
.mtk7 { color: #09885a; }
.mtk8 { color: #008000; }
.mtk9 { color: #dd0000; }
.mtk10 { color: #383838; }
.mtk11 { color: #cd3131; }
.mtk12 { color: #863b00; }
.mtk13 { color: #af00db; }
.mtk14 { color: #800000; }
.mtk15 { color: #e00000; }
.mtk16 { color: #3030c0; }
.mtk17 { color: #666666; }
.mtk18 { color: #778899; }
.mtk19 { color: #ff00ff; }
.mtk20 { color: #608b4e; }
.mtk21 { color: #a31515; }
.mtk22 { color: #4f76ac; }
.mtk23 { color: #008080; }
.mtk24 { color: #001188; }
.mtk25 { color: #4864aa; }
.mtki { font-style: italic; }
.mtkb { font-weight: bold; }
.mtku { text-decoration: underline; text-underline-position: under; }</style><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_unknown-chunk-42d919e9.js.download"></script><style type="text/css" media="screen"></style><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_vendors_interview-87f0cfa7.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_vendors_interview-5644d636.js.download"></script><link rel="stylesheet" type="text/css" href="./Strings _files/hackerrank_r_interview-d2fea1f1.css"><script charset="utf-8" src="./Strings _files/hackerrank_r_interview-3a958adb.js.download"></script><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs_promo-0ba883eb.js"><link rel="prefetch" href="https://hrcdn.net/fcore/assets/hackerrank_r_jobs_promo-bec94496.css"><title> Strings | HackerRank </title><meta name="description" id="meta-description" content="Learn how to input and output strings."><meta property="og:title" id="meta-og-title" content="Strings | HackerRank"><meta property="og:description" id="meta-og-description" content="Learn how to input and output strings."><meta property="og:url" id="meta-og-url" content="https://www.hackerrank.com/challenges/c-tutorial-strings/problem"><meta name="twitter:url" id="meta-twitter-url" content="https://www.hackerrank.com/challenges/c-tutorial-strings/problem"><meta name="twitter:title" id="meta-twitter-title" content="Strings | HackerRank"></head>
<body id="hr_v2" class="hr-community">
  <div id="fb-root"></div>
  

  <!-- Just a placeholder div to start loading open sans and source code loader -->
  <div class="font-open-sans-loader"></div>
  <div class="font-source-code-loader"></div>
  <!-- Just a placeholder div to start loading open sans and source code loader end -->

  <div id="content" onclick="void(0);"><div class="ui-kit-root"><div class="body-wrap community-page challenges-page problem-page show-cookie-banner" style=""><div class="toast-message loading"><span class="d-flex align-items-center toast-container containment"><i class="ui-icon-loading"></i><span class="toast-text">Loading...</span></span></div><div class="theme-m new-design logged-user"><div class="page-header-wrapper theme-m-section"><nav class="community-header"><div class="container"><div class="header-nav-links theme-m-section"><ul class="nav-links"><li class="nav-link-item logo-wrap"><a class="nav_link backbone logo_mark js_logo_mark logo-link" data-analytics="NavBarLogo" data-attr1="/dashboard" href="https://www.hackerrank.com/dashboard"><img id="feed-intro" class="logo-img-small" src="./Strings _files/h_mark_sm-966d2b45e3.svg" alt=""></a></li><li class="nav-link-item"><a class="nav-link dashboard active" data-analytics="NavBarDomains" href="https://www.hackerrank.com/dashboard"><span>Practice</span></a></li><li class="nav-link-item"><a class="nav-link contests" data-analytics="NavBarContests" href="https://www.hackerrank.com/contests"><span>Compete</span></a></li><li class="nav-link-item"><a class="nav-link" data-analytics="NavBarJobs" href="https://www.hackerrank.com/jobs"><span>Jobs</span><i class="ui-icon-circle-filled notification-indicator hidden"></i></a></li><li class="nav-link-item"><a class="nav-link" data-analytics="NavBarLeaderboard" id="leaderboard-nav-link" href="https://www.hackerrank.com/leaderboard"><span>Leaderboard</span></a></li></ul></div><div class="nav-buttons theme-m-section"><ul class="pull-left psR"><li class="hide-in-private-contest search-input-container input-icon main-hr-search" id="search-span"><div class="search-form new-search"><div><div class="search-query asyn-autocomplete autocomplete"><div class="ac-input-wrap cf"><input autocomplete="off" class="ac-input " value="" placeholder="Search"></div></div><i class="ui-icon-search"></i></div></div></li></ul><ul class="pull-left nav-wrap mmL"><li class="hide-in-private-contest button-item"><div class="dropdown dropdown message-dropdown notify-dropdown theme-m-content"><a class="cursor dropdown-handle nav_link hr_nav_messages_link js-dropdown-toggle js-link" data-analytics="NavBarMessageIcon"><i class="dropdown-icon ui-icon-message"></i></a><div class="dropdown-menu large"><header class="psT psB text-center menu-header"><strong class="header-title">Messages</strong></header><div id="notify_messages" class="dropdown-body"><div class="hr_nav_messages_list"><div class="no-propagation text-center txt-navy empty-msg">You have no unread messages.</div></div></div><footer class="final text-center show-all"><a class="btn show-all-link" href="https://www.hackerrank.com/inbox" data-analytics="NavBarMessageShowAll">Show All</a></footer></div></div></li><li class="button-item"><div class="dropdown dropdown notification-dropdown notify-dropdown theme-m-content"><a class="cursor dropdown-handle nav_link hr_nav_notifications_link js-dropdown-toggle js-link" data-toggle="dropdown" data-analytics="NavBarNotificationsIcon"><i class="dropdown-icon ui-icon-notification"></i></a><div class="dropdown-menu large" id="notify_broadcasts"><header class="psA menu-header"><strong class="header-title">Notifications</strong><a class="hr_archive_all archive pull-right js-link" data-analytics="NavBarNotificationsArchiveAll"><i class="icon-folder-open"></i>Archive All</a></header><div class="clearfix dropdown-body"><div class="hr_nav_notifications_list"><ul><li class="notify_item dropdown-item cursor" data-id="77678216" data-category="contest-announcements" data-url="/challenges/30-bitwise-and?utm_campaign=30_days_of_code_continuous&amp;utm_medium=email&amp;utm_source=daily_reminder"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>30 Days of Code Grand Finale! Day 29 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-25T04:03:44.000Z" title="2019-07-25 04:03">4 weeks ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77633969" data-category="contest-announcements" data-url="/challenges/30-regex-patterns?utm_campaign=30_days_of_code_continuous&amp;utm_medium=email&amp;utm_source=daily_reminder"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Pinpoint Patterns with RegEx! Day 28 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-24T04:03:53.000Z" title="2019-07-24 04:03">4 weeks ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77586555" data-category="contest-announcements" data-url="/challenges/30-testing?utm_campaign=30_days_of_code_continuous&amp;utm_medium=email&amp;utm_source=daily_reminder"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Testing 1, 2, 3. Day 27 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-23T03:59:52.000Z" title="2019-07-23 03:59">4 weeks ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77539837" data-category="contest-announcements" data-url="/challenges/30-nested-logic?utm_campaign=30_days_of_code_continuous&amp;utm_medium=email&amp;utm_source=daily_reminder"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Layer your Logic. Day 26 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-22T03:58:55.000Z" title="2019-07-22 03:58">4 weeks ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77499652" data-category="contest-announcements" data-url="/challenges/30-running-time-and-complexity?utm_campaign=30_days_of_code_continuous&amp;utm_medium=email&amp;utm_source=daily_reminder"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Optimize your Running Time! Day 25 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-21T03:58:34.000Z" title="2019-07-21 03:58">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77459324" data-category="contest-announcements" data-url="/challenges/30-linked-list-deletion?utm_campaign=30_days_of_code_continuous&amp;utm_medium=email&amp;utm_source=daily_reminder"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Link Up with Linked Lists. Day 24 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-20T03:59:23.000Z" title="2019-07-20 03:59">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77416643" data-category="contest-announcements" data-url="/challenges/30-binary-trees?utm_campaign=30_days_of_code_continuous&amp;utm_medium=email&amp;utm_source=daily_reminder"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Rooting for You! Day 23 Challenge of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-19T03:59:45.000Z" title="2019-07-19 03:59">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77372782" data-category="contest-announcements" data-url="/challenges/30-binary-search-trees?utm_campaign=30_days_of_code_continuous&amp;utm_medium=email&amp;utm_source=daily_reminder"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Stumped on Binary Search Trees? Day 22 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-18T03:59:03.000Z" title="2019-07-18 03:59">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77326633" data-category="contest-announcements" data-url="/challenges/30-generics?utm_campaign=30_days_of_code_continuous&amp;utm_medium=email&amp;utm_source=daily_reminder"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Become a Generics Master! Day 21 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-17T04:05:42.000Z" title="2019-07-17 04:05">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77281246" data-category="contest-announcements" data-url="/challenges/30-sorting"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Keep Calm and Bubble On. Day 20 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-16T04:01:41.000Z" title="2019-07-16 04:01">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77237614" data-category="contest-announcements" data-url="/challenges/30-interfaces"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Interacting with Interfaces. Day 19 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-15T03:59:06.000Z" title="2019-07-15 03:59">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77199209" data-category="contest-announcements" data-url="/challenges/30-queues-stacks"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Get in Line with Queues &amp; Stacks. Day 18 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-14T04:04:22.000Z" title="2019-07-14 04:04">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77160528" data-category="contest-announcements" data-url="/challenges/30-more-exceptions"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Handle Exceptions Like a Boss. Day 17 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-13T04:08:29.000Z" title="2019-07-13 04:08">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77120049" data-category="contest-announcements" data-url="/challenges/30-exceptions-string-to-integer"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Be Exception-al. Day 16 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-12T04:11:55.000Z" title="2019-07-12 04:11">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77077879" data-category="contest-announcements" data-url="/challenges/30-linked-list"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Come together for Linked Lists. Day 15 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-11T04:07:56.000Z" title="2019-07-11 04:07">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="77037694" data-category="contest-announcements" data-url="/challenges/30-scope"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Broaden your Scope. Day 14 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-10T04:12:45.000Z" title="2019-07-10 04:12">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="76997300" data-category="contest-announcements" data-url="/challenges/30-abstract-classes"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Let’s Get Abstract. Day 13 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-09T04:11:49.000Z" title="2019-07-09 04:11">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="76955898" data-category="contest-announcements" data-url="/challenges/30-inheritance"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Outstanding Inheritance. Day 12 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-08T04:07:08.000Z" title="2019-07-08 04:07">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="76919295" data-category="contest-announcements" data-url="/challenges/30-2d-arrays"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Immerse Yourself in 2D Arrays. Day 11 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-07T03:57:41.000Z" title="2019-07-07 03:57">1 month ago</time></small></div></div></li><li class="notify_item dropdown-item cursor" data-id="76882866" data-category="contest-announcements" data-url="/challenges/30-binary-numbers"><div class="notification-icon"><img src="./Strings _files/notifymarker-4be6d5a4c8.png"></div><div class="notification-subject pmT"><div class="psA"><div>Enter the World of 1’s and 0’s. Day 10 of 30 Days of Code.</div><small class="meta"><time class="time-text" datetime="2019-07-06T03:58:35.000Z" title="2019-07-06 03:58">2 months ago</time></small></div></div></li></ul></div></div><footer class="final show-all"><a class="btn show-all-link" href="https://www.hackerrank.com/notifications" data-analytics="NavBarNotificationsShowAll">Show All</a></footer></div></div></li><li class="button-item"><div class="dropdown dropdown dropdown-auth profile-menu cursor theme-m-content"><a class="backbone nav_link js-dropdown-toggle js-link toggle-wrap" data-analytics="NavBarProfileDropDown"><i class="ui-icon-user default-user-icon"></i><span class="mmR username text-ellipsis">Manisha16041998</span><i class="ui-icon-chevron-down down-icon"></i></a><div class="dropdown-menu drop-list pull-right"><ul><li class="hide-in-private-contest profile-nav-item"><a class="navigation_hackos hackos-count" data-analytics="NavBarProfileDropDownHackos" href="https://www.hackerrank.com/Manisha16041998/hackos">Hackos: <span class="navigation_hackos-count">115</span></a></li><li class="hide-in-private-contest profile-nav-item"><a rel="tooltip" data-placement="left" data-analytics="NavBarProfileDropDownProfile" href="https://www.hackerrank.com/Manisha16041998">Profile<div class="ui-progress-bar progress-bar theme-default"><div class="progress-filler" style="width:50%"></div></div></a></li><li class="hide-in-private-contest profile-nav-item"><a href="https://www.hackerrank.com/settings" data-analytics="NavBarProfileDropDownSettings">Settings</a></li><li class="hide-in-private-contest profile-nav-item"><a href="https://www.hackerrank.com/challenges/bookmarks" data-analytics="NavBarDropDownBookmarks">Bookmarks</a></li><li class="hide-in-private-contest profile-nav-item"><a href="https://www.hackerrank.com/network" data-analytics="NavBarProfileDropDownNetwork">Network</a></li><li class="hide-in-private-contest profile-nav-item"><a href="https://www.hackerrank.com/submissions" data-analytics="NavBarProfileDropDownSubmissions">Submissions</a></li><li class="hide-in-private-contest profile-nav-item"><a href="https://www.hackerrank.com/administration" data-analytics="NavBarProfileDropDownAdministration">Administration</a></li><li class="profile-nav-item"><a class="logout-button js-link" data-analytics="NavBarProfileDropDownLogout">Logout</a></li></ul></div></div></li></ul></div></div></nav></div><header class="community-header-breadcrumb"><div class="container"><div class="d-flex justify-content-between align-items-center content-header-wrapper"><div class="community-header-breadcrumb-items"><ol itemtype="http://schema.org/BreadcrumbList" class="community-breadcrumb text-content ellipsis"><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="Practice" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/dashboard"><span itemprop="name" class="breadcrumb-item-text">Practice</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="C++" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/domains/cpp"><span itemprop="name" class="breadcrumb-item-text">C++</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><a itemprop="item" class="breadcrumb-link" data-analytics="Breadcrumb" data-attr1="Strings" data-attr2="global" data-attr7="1" href="https://www.hackerrank.com/domains/cpp/cpp-strings"><span itemprop="name" class="breadcrumb-item-text">Strings</span></a><meta itemprop="position" content="1"></li><li itemprop="itemListElement" itemtype="http://schema.org/ListItem" class="breadcrumb-item"><span class="ui-icon-chevron-right mmL mmR chevron-icon"></span><span itemprop="name" class="breadcrumb-item-text">Strings</span><meta itemprop="position" content="1"></li></ol><div class="page-label-wrapper text-headline"><h1 class="page-label"><div class="challenge-page-label-wrapper align-items-center"><h1 class="ui-icon-label page-label">Strings</h1><button class="ui-btn ui-btn-normal ui-btn-plain star-button" tabindex="0" aria-label="Remove bookmark"><div class="ui-content align-icon-right"><span class="ui-text"><i class="icon-bookmark star-icon ui-icon-star-filled star-icon-filled"></i></span></div></button></div></h1></div></div><div class="community-header-aside"><div class="challenge-header-aside"><div class="track-badge-progress"><div class="badge-progress"><div class="remaining"><div class="point-left-wrap"><span class="point-left">40 more points</span> to get your next star!</div><div class="track-progress-bar"><div class="ui-progress-bar progress-bar theme-default"><div class="progress-filler" style="width: 50%;"></div></div></div><div class="score-info"><span class="current-rank">Rank: <span class="value">80515</span></span><span class="pipe">|</span><span class="current-points">Points: <span class="value">110/150</span></span><a class="scoring-link" data-analytics="BadgeLearnMoreLink" data-attr1="cpp" target="_blank" href="https://www.hackerrank.com/scoring"><i class="scoring-icon ui-icon-warning-hexagon"></i></a></div></div><div location="[object Object]" params="[object Object]" router="[object Object]" class="ui-badge level-silver"><div class="ui-badge-wrap"><svg viewBox="0 0 91.66667 100" class="hexagon"><g><defs><lineargradient id="badge-silver-gradient" x1="52.5" y1="2.5" x2="52.5" y2="102.5" gradientUnits="userSpaceOnUse"><stop offset="0" stop-color="#cee3eb"></stop><stop offset="1" stop-color="#aec8c7"></stop></lineargradient></defs><path fill="url(#badge-silver-gradient)" d="M98.28277,47.36h0c-.18459-9.382-.87983-17.797-2.0917-19.8595-1.02214-1.742-6.1721-5.43476-12.6195-9.45853L66.3804,8.23311C59.94162,4.89541,54.4699,2.5,52.49778,2.5c-2.42987,0-10.17687,3.63131-18.49789,8.18049-6.30411,3.44623-12.9328,7.41557-17.83631,10.74623-3.85037,2.61278-6.63864,4.828-7.35893,6.07393-.73574,1.27216-1.28014,4.91124-1.63613,9.67794l-.00014-.00008c-.45195,6.03951-.599,13.88935-.43933,21.10033.20233,9.11082.89243,17.18541,2.07561,19.22049C11.66541,82.42328,46.78277,102.5,52.49778,102.5c2.374,0,9.82245-3.47115,17.92388-7.87722,6.4-3.48081,13.19866-7.5418,18.23618-10.9459l-.00046-.00026c3.93694-2.6605,6.80064-4.91944,7.53385-6.17728.72907-1.2482,1.27024-4.80557,1.62881-9.48065l-.00014-.00008C98.269,62.13222,98.42408,54.47227,98.28277,47.36Z" transform="translate(-6.66667 -2.5)"></path></g><image class="badge-icon" xlink:href="https://hrcdn.net/fcore/assets/badges/cpp-739b350881.svg" x="50%" y="22" height="27" width="27" transform="translate(-13.5, 0)"></image><text class="badge-title" x="50%" y="65.5" font-size="10">CPP</text><g class="star-section" transform="translate(-12.5, 0)"><svg x="50%" y="71" height="10"><svg class="badge-star" viewBox="0 0 6.54904 6.25825" width="7" x="0"><path class="star" d="M55.51425,77.01983l-1.89417-.275-.84833-1.7175a.299.299,0,0,0-.27167-.16917.3245.3245,0,0,0-.2725.16917l-.305.61833-.5425,1.09916-.51417.075-1.38.2a.30333.30333,0,0,0-.18583.10083.33411.33411,0,0,0-.045.06833.35631.35631,0,0,0-.02417.07667.34087.34087,0,0,0-.005.04083.3038.3038,0,0,0,.02417.13417.33341.33341,0,0,0,.06667.0975l1.37167,1.33667-.2875,1.67167-.03667.21417c-.00167.01-.00167.02-.0025.02917l-.00167.0175a.26453.26453,0,0,0,.00167.04417.30489.30489,0,0,0,.44417.22917l1.69417-.89,1.69416.89a.30352.30352,0,0,0,.44084-.32L54.31175,78.874l1.37083-1.33667a.30339.30339,0,0,0-.16833-.5175" transform="translate(-49.22548 -74.85817)"></path></svg><svg class="badge-star" viewBox="0 0 6.54904 6.25825" width="7" x="9"><path class="star" d="M55.51425,77.01983l-1.89417-.275-.84833-1.7175a.299.299,0,0,0-.27167-.16917.3245.3245,0,0,0-.2725.16917l-.305.61833-.5425,1.09916-.51417.075-1.38.2a.30333.30333,0,0,0-.18583.10083.33411.33411,0,0,0-.045.06833.35631.35631,0,0,0-.02417.07667.34087.34087,0,0,0-.005.04083.3038.3038,0,0,0,.02417.13417.33341.33341,0,0,0,.06667.0975l1.37167,1.33667-.2875,1.67167-.03667.21417c-.00167.01-.00167.02-.0025.02917l-.00167.0175a.26453.26453,0,0,0,.00167.04417.30489.30489,0,0,0,.44417.22917l1.69417-.89,1.69416.89a.30352.30352,0,0,0,.44084-.32L54.31175,78.874l1.37083-1.33667a.30339.30339,0,0,0-.16833-.5175" transform="translate(-49.22548 -74.85817)"></path></svg><svg class="badge-star" viewBox="0 0 6.54904 6.25825" width="7" x="18"><path class="star" d="M55.51425,77.01983l-1.89417-.275-.84833-1.7175a.299.299,0,0,0-.27167-.16917.3245.3245,0,0,0-.2725.16917l-.305.61833-.5425,1.09916-.51417.075-1.38.2a.30333.30333,0,0,0-.18583.10083.33411.33411,0,0,0-.045.06833.35631.35631,0,0,0-.02417.07667.34087.34087,0,0,0-.005.04083.3038.3038,0,0,0,.02417.13417.33341.33341,0,0,0,.06667.0975l1.37167,1.33667-.2875,1.67167-.03667.21417c-.00167.01-.00167.02-.0025.02917l-.00167.0175a.26453.26453,0,0,0,.00167.04417.30489.30489,0,0,0,.44417.22917l1.69417-.89,1.69416.89a.30352.30352,0,0,0,.44084-.32L54.31175,78.874l1.37083-1.33667a.30339.30339,0,0,0-.16833-.5175" transform="translate(-49.22548 -74.85817)"></path></svg></svg></g></svg></div></div></div></div></div></div></div></div></header><div class="container"></div><div class="community-content"><div class="challenge-view theme-m"><div class="challenge-page-header container"><div class="ui-tabs-wrap"><div class="render-list clearfix"><ul class="tab-header"><li id="Problem" class="tab-item active"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/c-tutorial-strings/problem" data-attr2="Problem" data-attr3="no_full_screen" href="https://www.hackerrank.com/challenges/c-tutorial-strings/problem"><span class="ui-icon-label">Problem</span></a></li><li id="Submissions" class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/c-tutorial-strings/submissions" data-attr2="Submissions" data-attr3="no_full_screen" href="https://www.hackerrank.com/challenges/c-tutorial-strings/submissions"><span class="ui-icon-label">Submissions</span></a></li><li id="Leaderboard" class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/c-tutorial-strings/leaderboard" data-attr2="Leaderboard" data-attr3="no_full_screen" href="https://www.hackerrank.com/challenges/c-tutorial-strings/leaderboard"><span class="ui-icon-label">Leaderboard</span></a></li><li id="Discussions" class="tab-item"><a class="tab-item-color" data-analytics="ChallengeViewTab" data-attr1="/challenges/c-tutorial-strings/forum" data-attr2="Discussions" data-attr3="no_full_screen" href="https://www.hackerrank.com/challenges/c-tutorial-strings/forum"><span class="ui-icon-label">Discussions</span></a></li></ul></div></div></div><section class="challenge-interface challenge-problem"><div class="challenge-body"><div class="challenge-body-elements-problem challenge-container-element"><div class="container challenge-page-wrap panes-container theme-m-content"><div class="full-screen-split split-wrap left-pane"><section class="problem-statement split"><div class="ui-tabs-wrap"><div class="tab-list-content"><div class="theme-m hr_tour-problem-statement problem-statement have-external-links"><div class="content-text challenge-text mlB hackdown-container theme-m"><div class="challenge-body-html"><div class="challenge_problem_statement"><div class="msB challenge_problem_statement_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called <em>string</em>. Some of its widely used features are the following:</p>

<ul>
<li><p><em>Declaration:</em></p>

<pre><code>string a = "abc";
</code></pre></li>
<li><p><em>Size:</em> </p>

<pre><code>int len = a.size();
</code></pre></li>
<li><p><em>Concatenate two strings:</em></p>

<pre><code>string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
</code></pre></li>
<li><p><em>Accessing <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="2.575ex" height="2.509ex" style="vertical-align: -0.338ex;" viewBox="0 -934.9 1108.8 1080.4" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M184 600Q184 624 203 642T247 661Q265 661 277 649T290 619Q290 596 270 577T226 557Q211 557 198 567T184 600ZM21 287Q21 295 30 318T54 369T98 420T158 442Q197 442 223 419T250 357Q250 340 236 301T196 196T154 83Q149 61 149 51Q149 26 166 26Q175 26 185 29T208 43T235 78T260 137Q263 149 265 151T282 153Q302 153 302 143Q302 135 293 112T268 61T223 11T161 -11Q129 -11 102 10T74 74Q74 91 79 106T122 220Q160 321 166 341T173 380Q173 404 156 404H154Q124 404 99 371T61 287Q60 286 59 284T58 281T56 279T53 278T49 278T41 278H27Q21 284 21 287Z"></path><g transform="translate(345,362)"><path stroke-width="1" transform="scale(0.707)" d="M26 385Q19 392 19 395Q19 399 22 411T27 425Q29 430 36 430T87 431H140L159 511Q162 522 166 540T173 566T179 586T187 603T197 615T211 624T229 626Q247 625 254 615T261 596Q261 589 252 549T232 470L222 433Q222 431 272 431H323Q330 424 330 420Q330 398 317 385H210L174 240Q135 80 135 68Q135 26 162 26Q197 26 230 60T283 144Q285 150 288 151T303 153H307Q322 153 322 145Q322 142 319 133Q314 117 301 95T267 48T216 6T155 -11Q125 -11 98 4T59 56Q57 64 57 83V101L92 241Q127 382 128 383Q128 385 77 385H26Z"></path><g transform="translate(255,0)"><path stroke-width="1" transform="scale(0.707)" d="M137 683Q138 683 209 688T282 694Q294 694 294 685Q294 674 258 534Q220 386 220 383Q220 381 227 388Q288 442 357 442Q411 442 444 415T478 336Q478 285 440 178T402 50Q403 36 407 31T422 26Q450 26 474 56T513 138Q516 149 519 151T535 153Q555 153 555 145Q555 144 551 130Q535 71 500 33Q466 -10 419 -10H414Q367 -10 346 17T325 74Q325 90 361 192T398 345Q398 404 354 404H349Q266 404 205 306L198 293L164 158Q132 28 127 16Q114 -11 83 -11Q69 -11 59 -2T48 16Q48 30 121 320L195 616Q195 629 188 632T149 637H128Q122 643 122 645T124 664Q129 683 137 683Z"></path></g></g></g></svg></span> element:</em></p>

<pre><code>string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'

s[0] = 'z';         // s = "zbc"
</code></pre></li>
</ul>

<p><em>P.S.:</em> We will use <em>cin/cout</em> to read/write a string.</p></div></div></div><div class="challenge_input_format"><div class="msB challenge_input_format_title"><p><strong>Input Format</strong></p></div><div class="msB challenge_input_format_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>You are given two strings, <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.23ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 529.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path></g></svg></span> and <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="0.998ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 429.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g></svg></span>, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').</p></div></div></div><div class="challenge_output_format"><div class="msB challenge_output_format_title"><p><strong>Output Format</strong></p></div><div class="msB challenge_output_format_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><p>In the first line print two space-separated integers, representing the length of <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.23ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 529.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path></g></svg></span> and <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="0.998ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 429.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g></svg></span> respectively. <br>
In the second line print the string produced by concatenating <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-3-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.23ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 529.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path></g></svg></span> and <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-4-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="0.998ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 429.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g></svg></span> (<span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-5-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="5.068ex" height="2.343ex" style="vertical-align: -0.505ex;" viewBox="0 -791.3 2181.9 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><g transform="translate(751,0)"><path stroke-width="1" d="M56 237T56 250T70 270H369V420L370 570Q380 583 389 583Q402 583 409 568V270H707Q722 262 722 250T707 230H409V-68Q401 -82 391 -82H389H387Q375 -82 369 -68V230H70Q56 237 56 250Z"></path></g><g transform="translate(1752,0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g></g></svg></span>). <br>
In the third line print two strings separated by a space, <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-6-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.915ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 824.3 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><g transform="translate(529,362)"><path stroke-width="1" transform="scale(0.707)" d="M79 43Q73 43 52 49T30 61Q30 68 85 293T146 528Q161 560 198 560Q218 560 240 545T262 501Q262 496 260 486Q259 479 173 263T84 45T79 43Z"></path></g></g></svg></span> and <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-7-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.682ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 724.3 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path><g transform="translate(429,362)"><path stroke-width="1" transform="scale(0.707)" d="M79 43Q73 43 52 49T30 61Q30 68 85 293T146 528Q161 560 198 560Q218 560 240 545T262 501Q262 496 260 486Q259 479 173 263T84 45T79 43Z"></path></g></g></svg></span>. <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-8-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.915ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 824.3 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><g transform="translate(529,362)"><path stroke-width="1" transform="scale(0.707)" d="M79 43Q73 43 52 49T30 61Q30 68 85 293T146 528Q161 560 198 560Q218 560 240 545T262 501Q262 496 260 486Q259 479 173 263T84 45T79 43Z"></path></g></g></svg></span> and <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-9-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.682ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 724.3 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path><g transform="translate(429,362)"><path stroke-width="1" transform="scale(0.707)" d="M79 43Q73 43 52 49T30 61Q30 68 85 293T146 528Q161 560 198 560Q218 560 240 545T262 501Q262 496 260 486Q259 479 173 263T84 45T79 43Z"></path></g></g></svg></span> are the same as <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-10-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="1.23ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 529.5 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path></g></svg></span> and <span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-11-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="0.998ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 429.5 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g></svg></span>, respectively, except that their first characters are swapped.</p></div></div></div><div class="challenge_sample_input"><div class="msB challenge_sample_input_title"><p><strong>Sample Input</strong></p></div><div class="msB challenge_sample_input_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><pre><code>abcd
ef
</code></pre></div></div></div><div class="challenge_sample_output"><div class="msB challenge_sample_output_title"><p><strong>Sample Output</strong></p></div><div class="msB challenge_sample_output_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><pre><code>4 2
abcdef
ebcd af
</code></pre></div></div></div><div class="challenge_explanation"><div class="msB challenge_explanation_title"><p><strong>Explanation</strong></p></div><div class="msB challenge_explanation_body"><div class="hackdown-content"><style id="MathJax_SVG_styles">.MathJax_SVG_Display {text-align: center; margin: 1em 0em; position: relative; display: block!important; text-indent: 0; max-width: none; max-height: none; min-width: 0; min-height: 0; width: 100%}
.MathJax_SVG .MJX-monospace {font-family: monospace}
.MathJax_SVG .MJX-sans-serif {font-family: sans-serif}
.MathJax_SVG {display: inline; font-style: normal; font-weight: normal; line-height: normal; font-size: 100%; font-size-adjust: none; text-indent: 0; text-align: left; text-transform: none; letter-spacing: normal; word-spacing: normal; word-wrap: normal; white-space: nowrap; float: none; direction: ltr; max-width: none; max-height: none; min-width: 0; min-height: 0; border: 0; padding: 0; margin: 0}
.MathJax_SVG * {transition: none; -webkit-transition: none; -moz-transition: none; -ms-transition: none; -o-transition: none}
.mjx-svg-href {fill: blue; stroke: blue}
</style><svg style="display: none;"><defs id="MathJax_SVG_glyphs"></defs></svg><ul>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-1-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="3.683ex" height="1.676ex" style="vertical-align: -0.338ex;" viewBox="0 -576.1 1585.8 721.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><g transform="translate(807,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g></g></svg></span> <em>"abcd"</em></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-2-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="3.451ex" height="2.176ex" style="vertical-align: -0.338ex;" viewBox="0 -791.3 1485.8 936.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path><g transform="translate(707,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g></g></svg></span> <em>"ef"</em></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-3-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="6.784ex" height="2.843ex" style="vertical-align: -0.838ex;" viewBox="0 -863.1 2921.1 1223.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M139 -249H137Q125 -249 119 -235V251L120 737Q130 750 139 750Q152 750 159 735V-235Q151 -249 141 -249H139Z"></path><g transform="translate(278,0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path></g><g transform="translate(808,0)"><path stroke-width="1" d="M139 -249H137Q125 -249 119 -235V251L120 737Q130 750 139 750Q152 750 159 735V-235Q151 -249 141 -249H139Z"></path></g><g transform="translate(1364,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g><g transform="translate(2420,0)"><path stroke-width="1" d="M462 0Q444 3 333 3Q217 3 199 0H190V46H221Q241 46 248 46T265 48T279 53T286 61Q287 63 287 115V165H28V211L179 442Q332 674 334 675Q336 677 355 677H373L379 671V211H471V165H379V114Q379 73 379 66T385 54Q393 47 442 46H471V0H462ZM293 211V545L74 212L183 211H293Z"></path></g></g></svg></span></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-4-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="6.552ex" height="2.843ex" style="vertical-align: -0.838ex;" viewBox="0 -863.1 2821.1 1223.9" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M139 -249H137Q125 -249 119 -235V251L120 737Q130 750 139 750Q152 750 159 735V-235Q151 -249 141 -249H139Z"></path><g transform="translate(278,0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g><g transform="translate(708,0)"><path stroke-width="1" d="M139 -249H137Q125 -249 119 -235V251L120 737Q130 750 139 750Q152 750 159 735V-235Q151 -249 141 -249H139Z"></path></g><g transform="translate(1264,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g><g transform="translate(2320,0)"><path stroke-width="1" d="M109 429Q82 429 66 447T50 491Q50 562 103 614T235 666Q326 666 387 610T449 465Q449 422 429 383T381 315T301 241Q265 210 201 149L142 93L218 92Q375 92 385 97Q392 99 409 186V189H449V186Q448 183 436 95T421 3V0H50V19V31Q50 38 56 46T86 81Q115 113 136 137Q145 147 170 174T204 211T233 244T261 278T284 308T305 340T320 369T333 401T340 431T343 464Q343 527 309 573T212 619Q179 619 154 602T119 569T109 550Q109 549 114 549Q132 549 151 535T170 489Q170 464 154 447T109 429Z"></path></g></g></svg></span></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-5-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="7.521ex" height="2.343ex" style="vertical-align: -0.505ex;" viewBox="0 -791.3 3238.2 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><g transform="translate(751,0)"><path stroke-width="1" d="M56 237T56 250T70 270H369V420L370 570Q380 583 389 583Q402 583 409 568V270H707Q722 262 722 250T707 230H409V-68Q401 -82 391 -82H389H387Q375 -82 369 -68V230H70Q56 237 56 250Z"></path></g><g transform="translate(1752,0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path></g><g transform="translate(2459,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g></g></svg></span> <em>"abcdef"</em></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-6-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="4.368ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 1880.6 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M33 157Q33 258 109 349T280 441Q331 441 370 392Q386 422 416 422Q429 422 439 414T449 394Q449 381 412 234T374 68Q374 43 381 35T402 26Q411 27 422 35Q443 55 463 131Q469 151 473 152Q475 153 483 153H487Q506 153 506 144Q506 138 501 117T481 63T449 13Q436 0 417 -8Q409 -10 393 -10Q359 -10 336 5T306 36L300 51Q299 52 296 50Q294 48 292 46Q233 -10 172 -10Q117 -10 75 30T33 157ZM351 328Q351 334 346 350T323 385T277 405Q242 405 210 374T160 293Q131 214 119 129Q119 126 119 118T118 106Q118 61 136 44T179 26Q217 26 254 59T298 110Q300 114 325 217T351 328Z"></path><g transform="translate(529,362)"><path stroke-width="1" transform="scale(0.707)" d="M79 43Q73 43 52 49T30 61Q30 68 85 293T146 528Q161 560 198 560Q218 560 240 545T262 501Q262 496 260 486Q259 479 173 263T84 45T79 43Z"></path></g><g transform="translate(1102,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g></g></svg></span> <em>"ebcd"</em></li>
<li><span style="font-size: 100%; display: inline-block;" class="MathJax_SVG" id="MathJax-Element-7-Frame"><svg xmlns:xlink="http://www.w3.org/1999/xlink" width="4.136ex" height="2.343ex" style="vertical-align: -0.338ex;" viewBox="0 -863.1 1780.6 1008.6" role="img" focusable="false"><g stroke="currentColor" fill="currentColor" stroke-width="0" transform="matrix(1 0 0 -1 0 0)"><path stroke-width="1" d="M73 647Q73 657 77 670T89 683Q90 683 161 688T234 694Q246 694 246 685T212 542Q204 508 195 472T180 418L176 399Q176 396 182 402Q231 442 283 442Q345 442 383 396T422 280Q422 169 343 79T173 -11Q123 -11 82 27T40 150V159Q40 180 48 217T97 414Q147 611 147 623T109 637Q104 637 101 637H96Q86 637 83 637T76 640T73 647ZM336 325V331Q336 405 275 405Q258 405 240 397T207 376T181 352T163 330L157 322L136 236Q114 150 114 114Q114 66 138 42Q154 26 178 26Q211 26 245 58Q270 81 285 114T318 219Q336 291 336 325Z"></path><g transform="translate(429,362)"><path stroke-width="1" transform="scale(0.707)" d="M79 43Q73 43 52 49T30 61Q30 68 85 293T146 528Q161 560 198 560Q218 560 240 545T262 501Q262 496 260 486Q259 479 173 263T84 45T79 43Z"></path></g><g transform="translate(1002,0)"><path stroke-width="1" d="M56 347Q56 360 70 367H707Q722 359 722 347Q722 336 708 328L390 327H72Q56 332 56 347ZM56 153Q56 168 72 173H708Q722 163 722 153Q722 140 707 133H70Q56 140 56 153Z"></path></g></g></svg></span> <em>"af"</em></li>
</ul></div></div></div></div></div></div></div></div></section><section class="code-editor-section split"><div><div></div><section class="theme-dark dark-mode-panel monospace"><div class="ui-card ui-layer-2"><div class="card-content"><article class="dark-mode-intro"><div class="dark-mode-intro-content"><h2 class="dark-mode-intro-title">Welcome to the dark side!</h2><p class="dark-mode-intro-description">We've introduced a new Dark Mode for a better coding experience.</p></div><button class="ui-btn ui-btn-normal ui-btn-secondary dark-mode-intro-start-btn" tabindex="0"><div class="ui-content align-icon-right"><span class="ui-text">Try Dark Mode</span></div></button><button class="ui-icon-btn ui-btn-normal dark-mode-intro-dismiss-btn"><span class="sr-only">Dismiss the introduction</span><svg viewBox="0 0 100 100" width="1em" height="1em" aria-hidden="true" focusable="false" class=" ui-svg-icon" fill="currentColor"><path d="M88.184 81.468a3.008 3.008 0 0 1 0 4.242l-2.475 2.475a3.008 3.008 0 0 1-4.242 0l-69.65-69.65a3.008 3.008 0 0 1 0-4.242l2.476-2.476a3.008 3.008 0 0 1 4.242 0l69.649 69.651z"></path><path d="M18.532 88.184a3.01 3.01 0 0 1-4.242 0l-2.475-2.475a3.008 3.008 0 0 1 0-4.242l69.65-69.651a3.008 3.008 0 0 1 4.242 0l2.476 2.476a3.01 3.01 0 0 1 0 4.242l-69.651 69.65z"></path></svg></button></article></div></div></section><div class="hr-monaco-editor-wrapper"><div class="hr-monaco-editor-with-input"><div><div class="hr-monaco-editor-with-statusbar"><div class="hr-monaco-editor"><div class="editor-toolbar"><div class="toolbar-left"></div><div class="toolbar-right"><div class="toolbar-custom-items"><div class="theme-change-wrapper"><div class="dropdown"><div aria-haspopup="menu" class="dropdown-handle theme-change-handle"><span class="text-link">Change Theme</span></div><div role="menu" class="dropdown-body align-center" aria-hidden="true" tabindex="-1"><div class="arrow"></div><div class="btn-group change-theme-btn-group"><button class="ui-btn ui-btn-normal ui-btn-line active" tabindex="0" data-automation="btn-light"><div class="ui-content align-icon-right"><span class="ui-text">Light</span></div></button><button class="ui-btn ui-btn-normal ui-btn-line" tabindex="0" data-automation="btn-dark"><div class="ui-content align-icon-right"><span class="ui-text">Dark</span></div></button><button class="ui-btn ui-btn-normal ui-btn-line" tabindex="0" data-automation="btn-contrast"><div class="ui-content align-icon-right"><span class="ui-text">High Contrast</span></div></button></div></div></div></div></div><div class="Select  select-language has-value is-searchable Select--single"><div class="Select-control"><span class="Select-multi-value-wrapper" id="react-select-17--value"><div class="Select-value"><span class="Select-value-label" role="option" aria-selected="true" id="react-select-17--value-item">C++</span></div><div class="Select-input" style="display: inline-block;"><input aria-activedescendant="react-select-17--value" aria-expanded="false" aria-haspopup="false" aria-owns="" role="combobox" value="" style="box-sizing: content-box; width: 5px;"><div style="position: absolute; top: 0px; left: 0px; visibility: hidden; height: 0px; overflow: scroll; white-space: pre; font-size: 16px; font-family: OpenSans, Arial, Helvetica, sans-serif; font-weight: 400; font-style: normal; letter-spacing: normal; text-transform: none;"></div></div></span><span class="Select-arrow-zone"><span class="Select-arrow"></span></span></div></div><div class="toolbar-custom-items"><div class="hr-monaco-reset-code"><button class="ui-btn ui-btn-normal cursor reset-btn" tabindex="0" title="Reset Code" type="button"><div class="ui-content align-icon-right"><span class="ui-text"><i class="ui-icon-reset-code icon-grey reset-icon"></i></span></div></button></div><div class="fullscreen-btn-wrapper"><button class="ui-btn ui-btn-normal fullscreen fullscreen-btn no-select active-link hr-monaco-base-btn" tabindex="0" title="Switch to Full Screen layout" data-original-title="Switch to Full Screen layout"><div class="ui-content align-icon-right"><span class="ui-text"><i class="ui-icon-maximize icon-grey no-select"></i></span></div></button></div></div><div class="hr-monaco-settings-editor"><button class="ui-btn ui-btn-link cursor settings-toggle" tabindex="0" aria-haspopup="true" aria-expanded="false" aria-label="Editor Settings" title="Editor Settings"><i class="icon-cog ui-icon-settings icon-grey"></i></button></div></div></div><div class="hr-monaco-editor-parent"><div class="hr-monaco-base-editor showUnused" style="height: 428px;" data-keybinding-context="1" data-mode-id="cpp"><div class="monaco-editor vs" data-uri="file:///lsp-292b2f40-c365-11e9-9681-a5008014f0a1/Solution.cpp" style="width: 890px; height: 428px;"><div data-mprt="3" class="overflow-guard" style="width: 890px; height: 428px;"><div class="margin" role="presentation" aria-hidden="true" style="position: absolute; will-change: transform; top: -312px; height: 740px; width: 71px;"><div class="glyph-margin" style="left: 0px; width: 0px; height: 740px;"></div><div class="margin-view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="margin-view-overlays" role="presentation" aria-hidden="true" style="position: absolute; width: 71px; font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; line-height: 20px; letter-spacing: 0px; height: 740px;"><div style="position:absolute;top:360px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">19</div></div><div style="position:absolute;top:380px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">20</div></div><div style="position:absolute;top:400px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">21</div></div><div style="position:absolute;top:420px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">22</div></div><div style="position:absolute;top:440px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">23</div></div><div style="position:absolute;top:460px;width:100%;height:20px;"><div class="current-line" style="width:71px; height:20px;"></div><div class="line-numbers" style="left:0px;width:45px;">24</div></div><div style="position:absolute;top:480px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">25</div></div><div style="position:absolute;top:500px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">26</div></div><div style="position:absolute;top:520px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">27</div></div><div style="position:absolute;top:540px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">28</div></div><div style="position:absolute;top:560px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">29</div></div><div style="position:absolute;top:580px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">30</div></div><div style="position:absolute;top:600px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">31</div></div><div style="position:absolute;top:620px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">32</div></div><div style="position:absolute;top:640px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">33</div></div><div style="position:absolute;top:660px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">34</div></div><div style="position:absolute;top:680px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">35</div></div><div style="position:absolute;top:700px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">36</div></div><div style="position:absolute;top:720px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">37</div></div><div style="position:absolute;top:340px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">18</div></div><div style="position:absolute;top:320px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">17</div></div><div style="position:absolute;top:300px;width:100%;height:20px;"><div class="line-numbers" style="left:0px;width:45px;">16</div></div></div></div><div class="monaco-scrollable-element editor-scrollable vs" role="presentation" data-mprt="5" style="position: absolute; overflow: hidden; left: 71px; height: 428px; width: 819px;"><div class="lines-content monaco-editor-background" style="position: absolute; overflow: hidden; width: 1e+06px; height: 1e+06px; will-change: transform; top: -312px; left: 0px;"><div class="view-overlays" role="presentation" aria-hidden="true" style="position: absolute; height: 0px; width: 819px;"><div style="position:absolute;top:360px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:380px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:400px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:420px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:440px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:460px;width:100%;height:20px;"><div class="current-line" style="width:819px; height:20px;"></div><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:480px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:500px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:520px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:540px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:560px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:580px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:600px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:620px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:640px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position: absolute; top: 660px; width: 100%; height: 20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position: absolute; top: 680px; width: 100%; height: 20px;"></div><div style="position: absolute; top: 700px; width: 100%; height: 20px;"></div><div style="position: absolute; top: 720px; width: 100%; height: 20px;"></div><div style="position:absolute;top:340px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:320px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div><div style="position:absolute;top:300px;width:100%;height:20px;"><div class="cigra" style="left:0px;height:20px;width:36px"></div></div></div><div role="presentation" aria-hidden="true" class="view-rulers"></div><div class="view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="view-lines" role="presentation" aria-hidden="true" data-mprt="7" style="position: absolute; font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; line-height: 20px; letter-spacing: 0px; width: 819px; height: 740px;"><div style="top: 360px; height: 20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top: 380px; height: 20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;tmpa&nbsp;=&nbsp;str3[</span><span class="mtk7">0</span><span class="mtk1">];</span></span></div><div style="top: 400px; height: 20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;tmpb&nbsp;=&nbsp;str3[a];</span></span></div><div style="top:420px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:440px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;str3[</span><span class="mtk7">0</span><span class="mtk1">]&nbsp;=&nbsp;tmpb;</span></span></div><div style="top:460px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;str3[a]&nbsp;=&nbsp;tmpa;</span></span></div><div style="top:480px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:500px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;cout&nbsp;&lt;&lt;&nbsp;a&nbsp;&lt;&lt;&nbsp;</span><span class="mtk21">"&nbsp;"</span><span class="mtk1">&nbsp;&lt;&lt;&nbsp;b&nbsp;&lt;&lt;&nbsp;endl;</span></span></div><div style="top:520px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:540px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;cout&nbsp;&lt;&lt;&nbsp;tmpstr&nbsp;&lt;&lt;&nbsp;endl;</span></span></div><div style="top:560px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:580px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk6">for</span><span class="mtk1">(</span><span class="mtk6">int</span><span class="mtk1">&nbsp;i&nbsp;=&nbsp;</span><span class="mtk7">0</span><span class="mtk1">;&nbsp;i&nbsp;&lt;&nbsp;a;i++)cout&nbsp;&lt;&lt;&nbsp;str3[i];</span></span></div><div style="top:600px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;cout&nbsp;&lt;&lt;&nbsp;</span><span class="mtk21">"&nbsp;"</span><span class="mtk1">;</span></span></div><div style="top:620px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk6">for</span><span class="mtk1">(</span><span class="mtk6">int</span><span class="mtk1">&nbsp;i&nbsp;=&nbsp;a;&nbsp;i&nbsp;&lt;&nbsp;str3.size();&nbsp;i++)cout&nbsp;&lt;&lt;&nbsp;str3[i];</span></span></div><div style="top:640px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;cout&nbsp;&lt;&lt;&nbsp;endl;</span></span></div><div style="top: 660px; height: 20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk6">return</span><span class="mtk1">&nbsp;</span><span class="mtk7">0</span><span class="mtk1">;</span></span></div><div style="top: 680px; height: 20px;" class="view-line"><span><span class="mtk1">}</span></span></div><div style="top: 700px; height: 20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top: 720px; height: 20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:340px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk6">char</span><span class="mtk1">&nbsp;tmpa,tmpb;</span></span></div><div style="top:320px;height:20px;" class="view-line"><span><span>&nbsp;</span></span></div><div style="top:300px;height:20px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;tmpstr&nbsp;=&nbsp;str3&nbsp;=&nbsp;str1+str2;</span></span></div></div><div data-mprt="1" class="contentWidgets" style="position: absolute; top: 0px;"><div class="lightbulb-glyph" title="Show Fixes (Ctrl+.)" widgetid="LightBulbWidget" style="position: absolute; visibility: hidden;"></div></div><div role="presentation" aria-hidden="true" class="cursors-layer cursor-line-style cursor-solid"><div class="cursor " style="height: 20px; top: 460px; left: 171px; font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; line-height: 20px; letter-spacing: 0px; display: block; visibility: hidden; width: 2px;"></div></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute; width: 805px; height: 10px; left: 0px; bottom: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; will-change: transform; width: 805px;"></div></div><canvas class="decorationsOverviewRuler" aria-hidden="true" width="14" height="428" style="position: absolute; will-change: transform; top: 0px; right: 0px; width: 14px; height: 428px;"></canvas><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical fade" style="position: absolute; width: 14px; height: 428px; right: 0px; top: 0px;"><div class="slider" style="position: absolute; top: 181px; left: 0px; width: 14px; will-change: transform; height: 247px;"></div></div></div><div role="presentation" aria-hidden="true" style="width: 890px;" class="scroll-decoration"></div><textarea data-mprt="6" class="inputarea" wrap="off" autocorrect="off" autocapitalize="off" autocomplete="off" spellcheck="false" aria-label="Editor content;Press Alt+F1 for Accessibility Options." role="textbox" aria-multiline="true" aria-haspopup="false" aria-autocomplete="both" style="font-family: SourceCodePro, monospace; font-weight: normal; font-size: 1px; line-height: 20px; letter-spacing: 0px; top: 148px; left: 242px; width: 1px; height: 1px;"></textarea><div class="monaco-editor-background textAreaCover line-numbers" style="position: absolute; top: 0px; left: 0px; width: 0px; height: 0px;"></div><div data-mprt="4" class="overlayWidgets" style="width: 890px;"><div class="accessibilityHelpWidget" role="dialog" aria-hidden="true" widgetid="editor.contrib.accessibilityHelpWidget" style="display: none; position: absolute;"><div role="document"></div></div><div class="monaco-editor-hover hidden" aria-hidden="true" role="presentation" widgetid="editor.contrib.modesGlyphHoverWidget" style="position: absolute;"></div></div><div data-mprt="8" class="minimap slider-mouseover" role="presentation" aria-hidden="true" style="position: absolute; left: 0px; width: 0px; height: 428px;"><div class="minimap-shadow-hidden" style="height: 428px;"></div><canvas width="1" height="428" style="position: absolute; left: 0px; width: 1px; height: 428px;"></canvas><div class="minimap-slider" style="position: absolute; will-change: transform; width: 0px;"><div class="minimap-slider-horizontal" style="position: absolute; width: 0px; height: 0px;"></div></div></div></div><div data-mprt="2" class="overflowingContentWidgets"><div class="monaco-editor rename-box" widgetid="__renameInputWidget" style="height: 20px; box-shadow: rgb(168, 168, 168) 0px 2px 8px; position: absolute; visibility: hidden; max-width: 1366px;"><input class="rename-input" type="text" aria-label="Rename input. Type new name and press Enter to commit." style="font-family: SourceCodePro, monospace; font-weight: normal; font-size: 15px; background-color: rgb(255, 255, 255); color: rgb(97, 97, 97); border-width: 0px; border-style: none;"></div><div class="monaco-editor-hover hidden" tabindex="0" widgetid="editor.contrib.modesContentHoverWidget" style="position: absolute; visibility: hidden; max-width: 1366px;"><div class="monaco-scrollable-element " role="presentation" style="position: relative; overflow: hidden;"><div class="monaco-editor-hover-content" style="overflow: hidden; font-size: 15px; line-height: 20px; max-height: 250px;"></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 10px; will-change: transform;"></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical" style="position: absolute;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 10px; will-change: transform;"></div></div><div class="shadow"></div><div class="shadow"></div><div class="shadow top-left-corner"></div></div></div></div><div class="context-view monaco-builder-hidden" aria-hidden="true"></div></div></div></div></div><div class="hr-monaco-editor-statusbar"><div class="statusbar-position">Line: 24 Col: 20</div><div style="display: flex;"><div class="statusbar-message"></div></div></div></div><div class="pmR pmL pmB plT run-code-wrapper"><button class=" pull-right btn btn-primary hr-monaco-submit">Submit Code</button><button class=" pull-right btn msR hr-monaco-compile">Run Code</button></div></div><div class="pmR pmL pmB hr-monaco-custom-input-wrapper inline"><div><button class="btn btn-text upload-file mlR" data-analytics="Upload File" type="button"><i class="icon-upload ui-icon-upload"></i>Upload Code as File</button></div><div><label><div class="custom-checkbox inline"><input type="checkbox" class="custom-input-checkbox"></div><span class="lmT msL testcase-label">Test against custom input</span></label></div></div></div></div></div><div class="challenge-response fs-container"><div class="output-area-wrap"><div class="output-area mlT psT" id="output-area"><div class="code-compile-test-view theme-m-content"><div class="compile-error-wrapper"><p class="status compile-success">Congratulations!</p><p class="compile-advice">You have passed the sample test cases. Click the submit button to run your code against all the test cases.</p></div><div class="tc-container"><div class="testcase-wrapper theme-m"><div class="ui-tabs-wrap testcases-result-wrapper theme-m vertical-layout"><div class="render-list clearfix"><ul class="tab-header" role="tablist"><li id="Sample Test case 0" class="tab-item active" role="tab" aria-selected="true"><div class="testcase-tab-item tab-item-color-success testcase-item" data-attr2="master" data-attr3="c-tutorial-strings" data-analytics="TestCaseResultsTab" data-attr1="RunCode" data-attr5="0"><i class="ui-icon-check-circle"></i><span class="ui-icon-label tab-item-label">Sample Test case 0</span></div></li></ul></div><div class="tab-list-content tab-content d-flex" role="tabpanel"><div class="tab-pane-content"><div class="flex-block compilation-time-response full-width flex-column"><div class="stdin run-time-message flex-display run-time-message__line-numbers"><div class="d-flex compile-field-label">Input (stdin)<span class="compile-field-label__links"><a class="ui-btn ui-btn-normal ui-btn-plain text-link cursor-pointer ui-btn-link" tabindex="0" data-attr2="master" data-attr3="c-tutorial-strings" data-analytics="DownloadTestcase" data-attr1="RunCode" data-attr4="stdin" data-attr7="0" data-attr6="right" data-automation="compile-field-label-download"><div class="ui-content align-icon-right"><span class="ui-text">Download</span></div></a></span></div><div class="compile-output-message"><ul class="lines-container"><li class="d-flex lines-container__line"><span class="lines-container__value">abcd</span></li><li class="d-flex lines-container__line"><span class="lines-container__value">ef</span></li></ul></div></div><div class="stdout run-time-message flex-display run-time-message__line-numbers"><div class="d-flex compile-field-label">Your Output (stdout)<span class="compile-field-label__links"></span></div><div class="compile-output-message"><ul class="lines-container"><li class="d-flex lines-container__line"><span class="lines-container__value">4 2</span></li><li class="d-flex lines-container__line"><span class="lines-container__value">abcdef</span></li><li class="d-flex lines-container__line"><span class="lines-container__value">ebcd af</span></li><li class="d-flex lines-container__line"><span class="lines-container__value"></span></li></ul></div></div><div class="expected-output run-time-message flex-display run-time-message__line-numbers"><div class="d-flex compile-field-label">Expected Output<span class="compile-field-label__links"><a class="ui-btn ui-btn-normal ui-btn-plain text-link cursor-pointer ui-btn-link" tabindex="0" data-attr2="master" data-attr3="c-tutorial-strings" data-analytics="DownloadTestcase" data-attr1="RunCode" data-attr4="expected-output" data-attr7="0" data-attr6="right" data-automation="compile-field-label-download"><div class="ui-content align-icon-right"><span class="ui-text">Download</span></div></a></span></div><div class="compile-output-message"><ul class="lines-container"><li class="d-flex lines-container__line"><span class="lines-container__value">4 2</span></li><li class="d-flex lines-container__line"><span class="lines-container__value">abcdef</span></li><li class="d-flex lines-container__line"><span class="lines-container__value">ebcd af</span></li></ul></div></div></div></div></div></div></div></div></div></div></div></div></section></div><div class="right-pane"><aside class="theme-m-content fullscreen-hide challenge-sidebar"><div class="challenge-sidebar-container"><div class="sidebar-problem-difficulty challenge-sidebar-help"><div class="difficulty-block"><p class="difficulty-label">Author</p><a class="pull-right text-link" data-analytics="ChallengeViewHeaderAuthor" data-attr1="c-tutorial-strings" data-attr2="abhiranjan" href="https://www.hackerrank.com/profile/abhiranjan">abhiranjan</a></div><div class="difficulty-block"><p class="difficulty-label">Difficulty</p><p class="pull-right difficulty-easy">Easy</p></div><div class="difficulty-block"><p class="difficulty-label">Max Score</p><p class="sidebar-detail pull-right">10</p></div><div class="difficulty-block"><p class="difficulty-label">Submitted By</p><a class="pull-right text-link" data-analytics="ChallengeViewHackerCount" data-attr1="c-tutorial-strings" href="https://www.hackerrank.com/challenges/c-tutorial-strings/leaderboard">89287</a></div></div><div class="challenge-sidebar-help"><h2 class="text-sec-headline-s">Need Help?</h2><hr class="hr-line-light"><div class="mlB"><div class="link-wrapper"><a data-analytics="ChallengeSidebarUI" data-attr1="discussions" data-attr2="c-tutorial-strings" data-attr3="master" href="https://www.hackerrank.com/challenges/c-tutorial-strings/forum"><i class="ui-icon-discussion ui-icon-grey sidebar-icon"></i><span class="ui-icon-label">View discussions</span></a></div><div class="link-wrapper"><a data-analytics="ChallengeSidebarUI" data-attr1="topscorers" data-attr2="c-tutorial-strings" data-attr3="master" href="https://www.hackerrank.com/challenges/c-tutorial-strings/leaderboard"><i class="ui-icon-trophy ui-icon-grey sidebar-icon"></i><span class="ui-icon-label">View top submissions</span></a></div></div></div><div class="challenge-rating rating"><p class="zeta rating-label">rate this challenge</p><div class="rating"><i class="rating-icon cursor ui-icon-star" data-analytics="RatedChallenge" data-attr7="1"></i><i class="rating-icon cursor ui-icon-star" data-analytics="RatedChallenge" data-attr7="2"></i><i class="rating-icon cursor ui-icon-star" data-analytics="RatedChallenge" data-attr7="3"></i><i class="rating-icon cursor ui-icon-star" data-analytics="RatedChallenge" data-attr7="4"></i><i class="rating-icon cursor ui-icon-star" data-analytics="RatedChallenge" data-attr7="5"></i></div></div><div class="challenge-sidebar-help need-help-wrapper"><div class="text-sec-headline-s">MORE DETAILS</div><hr class="hr-line-light"><div class="link-wrapper"><a target="_blank" id="pdf-link" data-analytics="ChallengeViewSidebarPDF" data-attr1="c-tutorial-strings" href="https://www.hackerrank.com/rest/contests/master/challenges/c-tutorial-strings/download_pdf?language=English"><i class="ui-icon-grey sidebar-icon ui-icon-download"></i><span class="ui-icon-label">Download problem statement</span></a></div><div class="link-wrapper"><a target="_blank" id="test-cases-link" data-analytics="ChallengeViewSidebarTestCases" data-attr1="c-tutorial-strings" href="https://www.hackerrank.com/rest/contests/master/challenges/c-tutorial-strings/download_testcases"><i class="ui-icon-grey sidebar-icon ui-icon-download"></i><span class="ui-icon-label">Download sample test cases</span></a></div><div class="link-wrapper fullscreen-hide"><a class="cursor" data-analytics="ChallengeViewSuggestEdit" data-attr1="c-tutorial-strings"><i class="ui-icon-grey sidebar-icon ui-icon-edit"></i><span class="ui-icon-label">Suggest Edits</span></a></div></div><div class="social-share-wrap-2"><div class="clearfix"><div class="social-links-wrapper pull-left"><a class="cursor"><i class="social-share-icon ui-icon-facebook"></i></a><a class="cursor"><i class="social-share-icon ui-icon-twitter"></i></a><a class="cursor"><i class="social-share-icon ui-icon-linkedin"></i></a></div></div></div></div></aside></div></div></div></div></section></div></div><div></div><footer class="community-footer"><ul class="footer-links"><li class="link-item"><a target="_blank" class="footer-link calendar" data-analytics="FooterLinkCalendar" href="https://www.hackerrank.com/calendar">Contest Calendar</a></li><li class="link-item"><a target="_blank" class="footer-link blog" data-analytics="FooterLinkBlog" href="https://blog.hackerrank.com/">Blog</a></li><li class="link-item"><a target="_blank" class="footer-link scoring" data-analytics="FooterLinkScoring" href="https://www.hackerrank.com/scoring">Scoring</a></li><li class="link-item"><a target="_blank" class="footer-link environment" data-analytics="FooterLinkEnvironment" href="https://www.hackerrank.com/environment">Environment</a></li><li class="link-item"><a target="_blank" class="footer-link faq" data-analytics="FooterLinkFAQ" href="https://www.hackerrank.com/faq">FAQ</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkAboutUs" href="https://www.hackerrank.com/aboutus">About Us</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkSupport" href="https://help.hackerrank.com/hc/en-us">Support</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkCareers" href="https://www.hackerrank.com/careers">Careers</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkTermsOfService" href="https://www.hackerrank.com/terms-of-service">Terms Of Service</a></li><li class="link-item"><a target="_blank" class="footer-link" data-analytics="FooterLinkPrivacyPolicy" href="https://www.hackerrank.com/privacy">Privacy Policy</a></li><li class="link-item"><a target="_blank" class="footer-link featureRequestButton" data-analytics="FooterLinkFeatureRequest" href="https://www.hackerrank.com/support/feature">Request a Feature</a></li></ul></footer></div></div></div></div><!--Required to handle event bubbling of click in ios safari -->

  <script>
    //HR namespace
    var HR = {};
    HR.development = false;
    HR.assetPath = 'https://hrcdn.net/fcore/assets/';
    HR.pageLoadTime = Date.now();
    HR.productNamespace = 'hackerrank';
    HR.production = true;
    HR.devServer = false;
    HR.isIsomorphic = true;
    HR.loadedWithOldCss = false;
    HR.pusher = {"key":"a280047e3b323ccb1b65","cluster":"mt1"};
  </script>

  <!-- Vendor scripts -->
  
    <script src="./Strings _files/hackerrank_r_vendor-50032c7c7e.js.download"></script>
  

  
  <script src="./Strings _files/runtime-8af8f34d.js.download"></script>
  <script src="./Strings _files/hackerrank_r_client-15930085.js.download"></script>
  
<script>
  var getUser = (function() {
    var userData;
    $(window).on('initializeNewUser', function(e, user) {
      userData = user;
    });
    try{
      if (typeof userData === 'undefined') {
        userData = JSON.parse(decodeURI($('#initialUserData').html()));
        $('#initialUserData').remove();
      }
    } catch(e){
      userData = {};
      console.log('No initial User data found');
    }
    return function() {
      return userData;
    }
  })();
</script>


<!-- setting up sentry -->

  <script src="./Strings _files/raven.min.js.download" async="" crossorigin="anonymous" id="raven"></script>
  <script>
    (function(window, queue, loaded, script, user) {

        var setupRaven = function(user) {
          var userContext = {};
          if (user && !!user.id) {
            userContext.handle = user.id;
          }
          var extraContext = {
            cdnUrl: Cookies.get("cdn_url")
          }
          if (Cookies) {
            if (HR.productNamespace === 'hackerrank') {
              extraContext.mixpanel_token = Cookies.get('hackerrank_mixpanel_token')
            } else if (HR.productNamespace === 'hackerrankx') {
              extraContext.mixpanel_token = Cookies.get('hackerrankx_mixpanel_token')
            }
          }
          if(typeof Raven !== 'undefined') {
            Raven.setUserContext(userContext);
            Raven.setExtraContext(extraContext);
          }
        }
        $(window).on('initializeNewUser', function(e, user) {
          setupRaven(user);
        });

        window.onerror = function e(message, file, lineNo, columnNo, error) {
            if (loaded) return;
            queue.push([message, file, lineNo, columnNo, error]);
        };

        window.onunhandledrejection = function e(error) {
            if (loaded) return;
            queue.push([
                error.reason,
            ]);
        };

        script.onreadystatechange = script.onload = function() {
            if (loaded) return;
            loaded = true;

            Raven.config('https://6b2d52b23d5a4dd4bc44330335327c04@sentry.io/234162', {
                release: "0ad232fa1a",
                ignoreUrls: [/cdn\.userty\.com/],
                ignoreErrors: [
                  'Error: Connection is disposed',
                  'Connection got disposed',
                  'A network error occurred',
                  'Model is disposed!',
                  'Unable to get property \'isVisible\' of undefined',
                  'Cannot read property \'isVisible\' of undefined',
                ],
            }).install();

            setupRaven(user);

            window.onunhandledrejection = function e(error) {
                Raven.captureException(error.reason, {
                    extra: {
                        type: error.type,
                    },
                });
            };

            queue.forEach(function(error) {
                Raven.captureException(error[4] || error[0], {
                    extra: {
                        file: error[1],
                        line: error[2],
                        col: error[3],
                    },
                });
            });
        };
    }(window, [], false, document.getElementById('raven'), getUser()));
 </script>




<!-- google analytics tracking -->
<script>
  var _gaq = _gaq || [];
  
  _gaq.push(['candidate_company._setAccount', 'UA-45092266-1']);
  _gaq.push(['candidate_company._trackPageview']);
  _gaq.push(['candidate_company._gat._anonymizeIp']);
  _gaq.push(['_setCampSourceKey', 'utm_source']);
  _gaq.push(['_setCampMediumKey', 'utm_medium']);
  _gaq.push(['_setCampContentKey', 'utm_keyword']);
  _gaq.push(['_setCampTermKey', 'utm_keyword']);
  _gaq.push(['_setCampNameKey', 'utm_campaign']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();
  
</script>
<!-- Pending candidate site custom GA code -->
<!-- google analytics tracking end-->

<!-- mixpanel tracking -->
<script type="text/javascript">
  
    (function(e,a){if(!a.__SV){var b=window;try{var c,l,i,j=b.location,g=j.hash;c=function(a,b){return(l=a.match(RegExp(b+"=([^&]*)")))?l[1]:null};g&&c(g,"state")&&(i=JSON.parse(decodeURIComponent(c(g,"state"))),"mpeditor"===i.action&&(b.sessionStorage.setItem("_mpcehash",g),history.replaceState(i.desiredHash||"",e.title,j.pathname+j.search)))}catch(m){}var k,h;window.mixpanel=a;a._i=[];a.init=function(b,c,f){function e(b,a){var c=a.split(".");2==c.length&&(b=b[c[0]],a=c[1]);b[a]=function(){b.push([a].concat(Array.prototype.slice.call(arguments,
0)))}}var d=a;"undefined"!==typeof f?d=a[f]=[]:f="mixpanel";d.people=d.people||[];d.toString=function(b){var a="mixpanel";"mixpanel"!==f&&(a+="."+f);b||(a+=" (stub)");return a};d.people.toString=function(){return d.toString(1)+".people (stub)"};k="disable time_event track track_pageview track_links track_forms register register_once alias unregister identify name_tag set_config reset people.set people.set_once people.increment people.append people.union people.track_charge people.clear_charges people.delete_user".split(" ");
for(h=0;h<k.length;h++)e(d,k[h]);a._i.push([b,c,f])};a.__SV=1.2;b=e.createElement("script");b.type="text/javascript";b.async=!0;b.src="undefined"!==typeof MIXPANEL_CUSTOM_LIB_URL?MIXPANEL_CUSTOM_LIB_URL:"file:"===e.location.protocol&&"//cdn.mxpnl.com/libs/mixpanel-2-latest.min.js".match(/^\/\//)?"https://cdn.mxpnl.com/libs/mixpanel-2-latest.min.js":"//cdn.mxpnl.com/libs/mixpanel-2-latest.min.js";c=e.getElementsByTagName("script")[0];c.parentNode.insertBefore(b,c)}})(document,window.mixpanel||[]);
    mixpanel.init("bcb75af88bccc92724ac5fd79271e1ff");

    
      
        mixpanel.init("86cf4681911d3ff600208fdc823c5ff5", {}, "jobs_test");
      
      mixpanel.identify(Cookies.get("hackerrank_mixpanel_token"));
    
  
</script>
<!-- mixpanel tracking end-->

<!-- auryc tracking start -->
<script type="text/javascript">
  
    function aurycProps(user) {
      if(HR.productNamespace === 'hackerrankx') {
        userProps = {
          user_role: user.role,
          company_id: user.company.id,
          plan_name: user.company.plan_name
        }
      } else if (HR.productNamespace === 'hackerrank') {
        userProps = {
          user_id: user.id,
        };
      } else {
        userProps = {};
      }
      return userProps;
    }

    function setupAurycProps(aurycId, user) {
      userProps = aurycProps(user);
      window.auryc.identify(aurycId);
      window.auryc.addUserProperties(userProps);
      window.auryc.setFeedbackEnabled(!!user.enable_nps_survey);
      window.auryc.addSessionProperties({productNamespace: HR.productNamespace});
    }

    setupAuryc = function(user) {
      hackerrankxAurycSrc = "//cdn.userty.com/207-hackerrankcom/container.js";
      hackerrankAurycSrc = "//cdn.userty.com/531-hackerrankCommunity/container.js";
      if(HR.productNamespace === 'hackerrankx') {
        if (!(user && user.id) || !!Cookies.get('admin_su') || user.disable_auryc) return;
        src = hackerrankxAurycSrc;
        aurycId = user.id.toString();
      } else {
        return
      }

      ;(function (g) { g.aurycReadyCb = g.aurycReadyCb || []; var d = document, i, am = d.createElement("script"), h = d.head || d.getElementsByTagName("head")[0],aex = { "src": src, "data-cfasync": "false", "async": "true", "defer": "true", "data-vendor": "userty", "data-role": "container", "charset": "utf-8" }; for (var attr in aex) { am.setAttribute(attr,aex[attr]); } h.appendChild(am); })(window);

      if (window.auryc) {
        setupAurycProps(aurycId, user)
      } else if (window.aurycReadyCb) {
        window.aurycReadyCb.push(function() {
          setupAurycProps(aurycId, user)
        })
      }
    }

    setupAuryc(getUser());
    $(window).on('initializeNewUser', function(e, user) {
      setupAuryc(user);
    });
  
</script>
<!-- auryc tracking end -->

<!-- GTM tracking -->

<script type="text/javascript">
  var gtmTracking = function (user){
    if (window.dataLayer) {
      

      
        window.dataLayer.push({'event': 'setUserProps', 'userProps': {
          level: user.level,
          badges_onboarding_status: user.badges_onboarding_status,
          sourcing_jobs_consent: user.sourcing_jobs_consent
        }});
      
    }
  }
  gtmTracking(getUser());
  $(window).on('initializeNewUser', function(e, user) {
    gtmTracking(user);
  });

</script>

<!-- GTM tracking end -->


<!-- Google Tag Manager (noscript) #1 -->
<noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-5FXW96J"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<!-- End Google Tag Manager (noscript) #1 -->


<!-- Marketo to be added later -->



<!-- Bizible -->

<!-- HR metrics init -->
<script type="text/javascript">

  (function() {
    hr_metrics.init({
      product: 'hackerrank',
      use_cookie: true,
      uid_cookie_key: 'hackerrank_mixpanel_token',
      uid_token_cookie_key: 'metrics_user_identifier',
      session_cookie_key: 'session_id',
      metrics_endpoint:  'https://metrics.hackerrank.com/metrics' 
    });
  })();

  (function(h) {
    window.hr_metrics = h;
    if (!h.loaded) {
      var a = ['track', 'batch_track', 'app_track', 'externalService', 'init', 'batch_track_record', 'track_dwell_time', 'set_navigation_data'];
      for (var i = 0; i < a.length; i++) {
        if (!h[a[i]]) {h[a[i]] = function() {};}
      }
    }
  })(window.hr_metrics || {});



</script>

<!-- hrutm_params -->

<!-- HR metrics extension pack -->
<script type="text/javascript">

  
    if (('performance' in window) && ('timing' in window.performance)) {
      $(window).on("load", function() {
        setTimeout(function(){
          var timing = window.performance.timing;
          var obj = {
            referring_url: window.location.pathname,
            fullLoadTime: timing.loadEventEnd - timing.navigationStart,
            // Total time from req start to load
            loadTime: timing.loadEventEnd - timing.fetchStart,
            // Time spent constructing the DOM tree
            domReadyTime: timing.domComplete - timing.domInteractive,
            // Time consumed preparing the new page
            readyStart: timing.fetchStart - timing.navigationStart,
            // Time spent during redirection
            redirectTime: timing.redirectEnd - timing.redirectStart,
            // AppCache
            appcacheTime: timing.domainLookupStart - timing.fetchStart,
            // Time spent unloading documents
            unloadEventTime: timing.unloadEventEnd - timing.unloadEventStart,
            // DNS query time
            lookupDomainTime: timing.domainLookupEnd - timing.domainLookupStart,
            // TCP connection time
            connectTime: timing.connectEnd - timing.connectStart,
            // Time spent during the request
            requestTime: timing.responseEnd - timing.requestStart,
            // Request to completion of the DOM loading
            initDomTreeTime: timing.domInteractive - timing.responseEnd,
            // Load event time
            loadEventTime: timing.loadEventEnd - timing.loadEventStart,
            // Origin of the request
            react: true,
            //isIsomorphic flag
            isIsomorphic: window.HR.isIsomorphic,
            //old css loaded flag
            loadedWithOldCss: window.HR.loadedWithOldCss,
          }

          if (('navigation' in window.performance) && ('getEntries' in window.performance)) {
            obj.navigationType = window.performance.navigation.type;
            obj.navigationRedirectCount = window.performance.navigation.redirectCount;
            if (obj.fullLoadTime > 8000) {
              try {
                var entries = window.performance.getEntries();
                if(entries[0].toJSON){
                  obj.networkRequests = entries.map(function(e) {return e.toJSON();});
                }
              } catch (e) {
                //do nothing
              }
            }
          }

          hr_metrics.app_track('page-load-metrics', obj);
        }, 1000);
      });
    }
  

  $(window).on("load", function() {
      var _pathname = document.location.pathname;
      var cdn_url_switched = Cookies.get("cdn_url_switched");
      if (cdn_url_switched !== '') {
        Cookies.remove('cdn_url_switched');
      }
      hr_metrics.batch_track('PageLoad', _pathname + document.location.search, {
          attribute1: _pathname,
          attribute6: cdn_url_switched,
          cdn_url: Cookies.get("cdn_url")
      });

      if (hr_metrics.track_dwell_time) {
          hr_metrics.track_dwell_time(_pathname);
          hr_metrics.set_navigation_data();
      }

      $(window).on('beforeunload', function(){

          var _pathname = document.location.pathname;
          hr_metrics.batch_track('PageClose', _pathname + document.location.search, {
              attribute2: _pathname
          });

          hr_metrics.track_dwell_time(_pathname, true);

          hr_metrics.batch_track_record(true);
      });

  });

</script>

<!-- Facebook SDK -->
<!-- Twitter SDK -->

<!-- track button clicks -->
<script>
    $(document).on('click', 'a, button, input, select, i, div, span, h5', null, function(e) {
        var src = e.currentTarget, $src = $(e.currentTarget);
        if ($src.attr('data-analytics')) {
            action = 'Click'; data = $src.attr('data-analytics');
        } else {
            return;
        }

        
          hr_metrics.batch_track(action, data, (function() {
              var params={};
              for (var _i=1; _i<=12; ++_i){
                  var _attr = 'data-attr'+_i;
                  if ($src.attr(_attr)){
                    params['attribute'+_i] = $src.attr(_attr);
                  }
              }
              var attributes = src.attributes, attr_length = src.attributes.length;
              for (var i = 0; i < attr_length; i++){
                var attribute = attributes[i];
                if (attribute.name.indexOf('data-attr-') === 0){
                  param_name = attribute.name.substr('data-attr-'.length);
                  if (param_name.length > 0) {
                    params[param_name] = attribute.value;
                  }
                }
              }
              return params;
          })());
        

        
          // google analytics
          _gaq.push(['_trackEvent', 'Events' , action, data])
        
    });

    $(document).on('AnalyticsEvent', function(e) {
        action = e.event_type || false;
        data = e.event_name || false;

        if (!action || !data) {
          return;
        }

        params = {}
        params['attribute1'] = e.event_value || ""
        params['attribute7'] = e.integer_event_value

        if (window.HR && window.HR.current_page) {
          params['attribute2'] = window.HR.current_page;
        }

        if (window.HR && window.HR.current_contest) {
          params['attribute3'] = window.HR.current_contest.get('name');
        }

        
            hr_metrics.batch_track(action, data, params);
        

        
          // google analytics
          _gaq.push(['_trackEvent', 'Events' , action, data]);
        
    });

  </script>
<!-- track button clicks end-->

<!-- Linkedin Insights -->




<div class="monaco-aria-container"><div class="monaco-alert" role="alert" aria-atomic="true"></div><div class="monaco-status" role="status" aria-atomic="true"></div></div></body></html>