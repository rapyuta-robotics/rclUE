#ifndef _H_B1001FABAA447A520CC0D77B2C447BF4_UInt16MultiArray_DCPS_H_
#define _H_B1001FABAA447A520CC0D77B2C447BF4_UInt16MultiArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "UInt16MultiArray_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class UInt16MultiArray_TypeSupportInterface;

            typedef UInt16MultiArray_TypeSupportInterface * UInt16MultiArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < UInt16MultiArray_TypeSupportInterface> UInt16MultiArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < UInt16MultiArray_TypeSupportInterface> UInt16MultiArray_TypeSupportInterface_out;


            class UInt16MultiArray_DataWriter;

            typedef UInt16MultiArray_DataWriter * UInt16MultiArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < UInt16MultiArray_DataWriter> UInt16MultiArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < UInt16MultiArray_DataWriter> UInt16MultiArray_DataWriter_out;


            class UInt16MultiArray_DataReader;

            typedef UInt16MultiArray_DataReader * UInt16MultiArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < UInt16MultiArray_DataReader> UInt16MultiArray_DataReader_var;
            typedef DDS_DCPSInterface_out < UInt16MultiArray_DataReader> UInt16MultiArray_DataReader_out;


            class UInt16MultiArray_DataReaderView;

            typedef UInt16MultiArray_DataReaderView * UInt16MultiArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < UInt16MultiArray_DataReaderView> UInt16MultiArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < UInt16MultiArray_DataReaderView> UInt16MultiArray_DataReaderView_out;

            struct UInt16MultiArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < UInt16MultiArray_, struct UInt16MultiArray_Seq_uniq_> UInt16MultiArray_Seq;
            typedef DDS_DCPSSequence_var < UInt16MultiArray_Seq> UInt16MultiArray_Seq_var;
            typedef DDS_DCPSSequence_out < UInt16MultiArray_Seq> UInt16MultiArray_Seq_out;

            class  UInt16MultiArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef UInt16MultiArray_TypeSupportInterface_ptr _ptr_type;
                typedef UInt16MultiArray_TypeSupportInterface_var _var_type;

                static UInt16MultiArray_TypeSupportInterface_ptr _duplicate (UInt16MultiArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt16MultiArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static UInt16MultiArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt16MultiArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt16MultiArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                UInt16MultiArray_TypeSupportInterface () {};
                ~UInt16MultiArray_TypeSupportInterface () {};
            private:
                UInt16MultiArray_TypeSupportInterface (const UInt16MultiArray_TypeSupportInterface &);
                UInt16MultiArray_TypeSupportInterface & operator = (const UInt16MultiArray_TypeSupportInterface &);
            };

            class  UInt16MultiArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef UInt16MultiArray_DataWriter_ptr _ptr_type;
                typedef UInt16MultiArray_DataWriter_var _var_type;

                static UInt16MultiArray_DataWriter_ptr _duplicate (UInt16MultiArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt16MultiArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static UInt16MultiArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt16MultiArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt16MultiArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const UInt16MultiArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const UInt16MultiArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const UInt16MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const UInt16MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const UInt16MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const UInt16MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const UInt16MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const UInt16MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const UInt16MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const UInt16MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (UInt16MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt16MultiArray_& instance_data) = 0;

            protected:
                UInt16MultiArray_DataWriter () {};
                ~UInt16MultiArray_DataWriter () {};
            private:
                UInt16MultiArray_DataWriter (const UInt16MultiArray_DataWriter &);
                UInt16MultiArray_DataWriter & operator = (const UInt16MultiArray_DataWriter &);
            };

            class  UInt16MultiArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef UInt16MultiArray_DataReader_ptr _ptr_type;
                typedef UInt16MultiArray_DataReader_var _var_type;

                static UInt16MultiArray_DataReader_ptr _duplicate (UInt16MultiArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt16MultiArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static UInt16MultiArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt16MultiArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt16MultiArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt16MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt16MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt16MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt16MultiArray_& instance) = 0;

            protected:
                UInt16MultiArray_DataReader () {};
                ~UInt16MultiArray_DataReader () {};
            private:
                UInt16MultiArray_DataReader (const UInt16MultiArray_DataReader &);
                UInt16MultiArray_DataReader & operator = (const UInt16MultiArray_DataReader &);
            };

            class  UInt16MultiArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef UInt16MultiArray_DataReaderView_ptr _ptr_type;
                typedef UInt16MultiArray_DataReaderView_var _var_type;

                static UInt16MultiArray_DataReaderView_ptr _duplicate (UInt16MultiArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt16MultiArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static UInt16MultiArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt16MultiArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt16MultiArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt16MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt16MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt16MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt16MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt16MultiArray_& instance) = 0;

            protected:
                UInt16MultiArray_DataReaderView () {};
                ~UInt16MultiArray_DataReaderView () {};
            private:
                UInt16MultiArray_DataReaderView (const UInt16MultiArray_DataReaderView &);
                UInt16MultiArray_DataReaderView & operator = (const UInt16MultiArray_DataReaderView &);
            };
        }

    }

}

#endif
