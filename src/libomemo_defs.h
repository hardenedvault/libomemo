#pragma once

#define HINTS_XMLNS "urn:xmpp:hints"

#ifndef OMEMO_XMLNS
#define OMEMO_XMLNS "urn:xmpp:omemo"
#endif

#ifndef OMEMO_NS_SEPARATOR
#define OMEMO_NS_SEPARATOR ":"
#endif

#define OMEMO_NS_SEPARATOR_FINAL ":"

#ifndef OMEMO_VERSION
#define OMEMO_VERSION 1
#endif

#define STR(x) #x
#define XSTR(x) STR(x)

#ifdef OMEMO_NS_NOVERSION
#define OMEMO_NS OMEMO_XMLNS
#else
#define OMEMO_NS OMEMO_XMLNS ":" XSTR(OMEMO_VERSION)
#endif

#define PEP_NODE_NAME "node"
#if (OMEMO_VERSION > 0)
#define DEVICELIST_PEP_NAME "devices"
#else
#define DEVICELIST_PEP_NAME "devicelist"
#endif
#define BUNDLE_PEP_NAME "bundles"

#define OMEMO_DEVICELIST_PEP_NODE OMEMO_NS OMEMO_NS_SEPARATOR DEVICELIST_PEP_NAME

#define MESSAGE_NODE_NAME "message"
#define BODY_NODE_NAME "body"
#define ENCRYPTED_NODE_NAME "encrypted"
#define HEADER_NODE_NAME "header"
#define IV_NODE_NAME "iv"
#if (OMEMO_VERSION > 0)
#define RECIPIENT_NODE_NAME "keys"
#define RECIPIENT_NODE_JID_ATTR_NAME "jid"
#endif
#define KEY_NODE_NAME "key"
#define PAYLOAD_NODE_NAME "payload"
#define STORE_NODE_NAME "store"

#define PUBLISH_NODE_NAME "publish"
#define ITEMS_NODE_NAME "items"
#define ITEM_NODE_NAME "item"
#define LIST_NODE_NAME "list"
#define BUNDLE_NODE_NAME "bundle"
#define PREKEYS_NODE_NAME "prekeys"
#if (OMEMO_VERSION > 0)
#define SIGNED_PRE_KEY_NODE_NAME "spk"
#define SIGNATURE_NODE_NAME "spks"
#define PRE_KEY_NODE_NAME "pk"
#define IDENTITY_KEY_NODE_NAME "ik"
#define ITEM_NODE_ID_ATTR_NAME "id"
#else
#define SIGNED_PRE_KEY_NODE_NAME "signedPreKeyPublic"
#define SIGNATURE_NODE_NAME "signedPreKeySignature"
#define PRE_KEY_NODE_NAME "preKeyPublic"
#define IDENTITY_KEY_NODE_NAME "identityKey"
#endif
#define DEVICE_NODE_NAME "device"

#define XMLNS_ATTR_NAME "xmlns"
#define MESSAGE_NODE_FROM_ATTR_NAME "from"
#define MESSAGE_NODE_TO_ATTR_NAME "to"
#define HEADER_NODE_SID_ATTR_NAME "sid"
#define KEY_NODE_RID_ATTR_NAME "rid"
#define KEY_NODE_KEX_ATTR_NAME "kex"
#define PUBLISH_NODE_NODE_ATTR_NAME "node"
#if (OMEMO_VERSION > 0)
#define SIGNED_PRE_KEY_NODE_ID_ATTR_NAME "id"
#define PRE_KEY_NODE_ID_ATTR_NAME "id"
#else
#define SIGNED_PRE_KEY_NODE_ID_ATTR_NAME "signedPreKeyId"
#define PRE_KEY_NODE_ID_ATTR_NAME "preKeyId"
#endif
#define DEVICE_NODE_ID_ATTR_NAME "id"

#define OMEMO_DB_DEFAULT_FN "omemo.sqlite"

#define NO_OMEMO_MSG "You received an OMEMO encrypted message, but your client does not support it."

#define EME_NODE_NAME "encryption"
#define EME_XMLNS "urn:xmpp:eme:0"
#define EME_NAMESPACE_ATTR_NAME "namespace"
#define EME_NAME_ATTR_NAME "name"
