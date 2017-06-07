<%@ Control language="c#" AutoEventWireup="false" Explicit="True" Inherits="DotNetNuke.UI.Skins.Skin" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.Web.Client.ClientResourceManagement" Assembly="DotNetNuke.Web.Client" %>
<%@ Register TagPrefix="dnn" Namespace="DotNetNuke.Web.DDRMenu.TemplateEngine" Assembly="DotNetNuke.Web.DDRMenu" %>
<%@ Register TagPrefix="dnn" TagName="Logo" Src="~/Admin/Skins/logo.ascx" %>
<%@ Register TagPrefix="dnn" TagName="Menu" src="~/DesktopModules/DDRMenu/Menu.ascx" %>
<%@ Register TagPrefix="dnn" TagName="META" Src="~/Admin/Skins/Meta.ascx" %>





<!-- META -->
<dnn:META runat="server" Name="viewport" Content="initial-scale=1.0, width=device-width" />
<!-- CSS -->
<dnn:DnnCssInclude runat="server" FilePath="css/styles.min.css" PathNameAlias="SkinPath" />
<!-- Javascript -->
<dnn:DnnJsInclude runat="server" FilePath="js/scripts.min.js" PathNameAlias="SkinPath" />





<!-- Variables for Skin Wrapper Classes -->
<%
	string pageName = PortalSettings.ActiveTab.TabName;
	int pageId = PortalSettings.ActiveTab.TabID;
	string logged = (Request.IsAuthenticated) ? "logged-in" : "logged-out";
	string admin = (UserController.GetCurrentUserInfo().IsInRole("Administrators")) ? "admin" : "";
	string bc = "bc-" + PortalSettings.ActiveTab.BreadCrumbs.Cast<DotNetNuke.Entities.Tabs.TabInfo>().First().TabID;
  string editMode = (DotNetNuke.Common.Globals.IsEditMode()) ? "edit-mode" : "";
%>