#ifndef _H_18C1786C3323808F675F31C5E0FE8B97_Bool_DCPS_H_
#define _H_18C1786C3323808F675F31C5E0FE8B97_Bool_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Bool_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Bool_TypeSupportInterface;

            typedef Bool_TypeSupportInterface * Bool_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Bool_TypeSupportInterface> Bool_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Bool_TypeSupportInterface> Bool_TypeSupportInterface_out;


            class Bool_DataWriter;

            typedef Bool_DataWriter * Bool_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Bool_DataWriter> Bool_DataWriter_var;
            typedef DDS_DCPSInterface_out < Bool_DataWriter> Bool_DataWriter_out;


            class Bool_DataReader;

            typedef Bool_DataReader * Bool_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Bool_DataReader> Bool_DataReader_var;
            typedef DDS_DCPSInterface_out < Bool_DataReader> Bool_DataReader_out;


            class Bool_DataReaderView;

            typedef Bool_DataReaderView * Bool_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Bool_DataReaderView> Bool_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Bool_DataReaderView> Bool_DataReaderView_out;

            struct Bool_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Bool_, struct Bool_Seq_uniq_> Bool_Seq;
            typedef DDS_DCPSSequence_var < Bool_Seq> Bool_Seq_var;
            typedef DDS_DCPSSequence_out < Bool_Seq> Bool_Seq_out;

            class  Bool_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Bool_TypeSupportInterface_ptr _ptr_type;
                typedef Bool_TypeSupportInterface_var _var_type;

                static Bool_TypeSupportInterface_ptr _duplicate (Bool_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Bool_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Bool_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Bool_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Bool_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Bool_TypeSupportInterface () {};
                ~Bool_TypeSupportInterface () {};
            private:
                Bool_TypeSupportInterface (const Bool_TypeSupportInterface &);
                Bool_TypeSupportInterface & operator = (const Bool_TypeSupportInterface &);
            };

            class  Bool_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Bool_DataWriter_ptr _ptr_type;
                typedef Bool_DataWriter_var _var_type;

                static Bool_DataWriter_ptr _duplicate (Bool_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Bool_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Bool_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Bool_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Bool_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Bool_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Bool_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Bool_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Bool_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Bool_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Bool_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Bool_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Bool_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Bool_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Bool_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Bool_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Bool_& instance_data) = 0;

            protected:
                Bool_DataWriter () {};
                ~Bool_DataWriter () {};
            private:
                Bool_DataWriter (const Bool_DataWriter &);
                Bool_DataWriter & operator = (const Bool_DataWriter &);
            };

            class  Bool_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Bool_DataReader_ptr _ptr_type;
                typedef Bool_DataReader_var _var_type;

                static Bool_DataReader_ptr _duplicate (Bool_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Bool_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Bool_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Bool_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Bool_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Bool_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Bool_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Bool_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Bool_& instance) = 0;

            protected:
                Bool_DataReader () {};
                ~Bool_DataReader () {};
            private:
                Bool_DataReader (const Bool_DataReader &);
                Bool_DataReader & operator = (const Bool_DataReader &);
            };

            class  Bool_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Bool_DataReaderView_ptr _ptr_type;
                typedef Bool_DataReaderView_var _var_type;

                static Bool_DataReaderView_ptr _duplicate (Bool_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Bool_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Bool_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Bool_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Bool_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Bool_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Bool_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Bool_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Bool_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Bool_& instance) = 0;

            protected:
                Bool_DataReaderView () {};
                ~Bool_DataReaderView () {};
            private:
                Bool_DataReaderView (const Bool_DataReaderView &);
                Bool_DataReaderView & operator = (const Bool_DataReaderView &);
            };
        }

    }

}

#endif
